#include <stdio.h>
#define NUM_CIDADES 200
/*Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)

- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/
int main()
{
    char codigos[NUM_CIDADES][10];
    char estados[NUM_CIDADES][3];
    int veiculosPasseio[NUM_CIDADES];
    int acidentesVitimas[NUM_CIDADES];
    int i;

    for (i = 0; i < NUM_CIDADES; i++)
    {
        printf("Cidade %d:\n", i + 1);
        printf("Código: ");
        scanf("%s", codigos[i]);
        printf("Estado: ");
        scanf("%s", estados[i]);
        printf("Veículos de passeio: ");
        scanf("%d", &veiculosPasseio[i]);
        printf("Acidentes com vítimas: ");
        scanf("%d", &acidentesVitimas[i]);
    }

    int maiorIndice = -1, menorIndice = -1;
    int indiceMaiorCidade, indiceMenorCidade;

    for (i = 0; i < NUM_CIDADES; i++)
    {
        int indice = acidentesVitimas[i] / veiculosPasseio[i];

        if (maiorIndice == -1 || indice > maiorIndice)
        {
            maiorIndice = indice;
            indiceMaiorCidade = i;
        }

        if (menorIndice == -1 || indice < menorIndice)
        {
            menorIndice = indice;
            indiceMenorCidade = i;
        }
    }

    int somaVeiculos = 0;
    for (i = 0; i < NUM_CIDADES; i++)
    {
        somaVeiculos += veiculosPasseio[i];
    }

    double mediaVeiculos = (double)somaVeiculos / NUM_CIDADES;

    int somaAcidentesRS = 0;
    int numCidadesRS = 0;

    for (i = 0; i < NUM_CIDADES; i++)
    {
        if (estados[i][0] == 'R' && estados[i][1] == 'S')
        {
            somaAcidentesRS += acidentesVitimas[i];
            numCidadesRS++;
        }
    }

    double mediaAcidentesRS = (double)somaAcidentesRS / numCidadesRS;

    printf("%d %s %s\n", maiorIndice, codigos[indiceMaiorCidade], estados[indiceMaiorCidade]);
    printf("%d %s %s\n", menorIndice, codigos[indiceMenorCidade], estados[indiceMenorCidade]);
    printf("%.2lf\n", mediaVeiculos);
    printf("%.2lf\n", mediaAcidentesRS);
}