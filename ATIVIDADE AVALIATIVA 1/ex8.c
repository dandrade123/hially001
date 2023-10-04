#include <stdio.h>
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/

int main()
{
    float salario, totalSalario = 0, maiorSalario = 0;
    int numFilhos, totalFilhos = 0, salarioAte100 = 0;
    int i = 0;

    do
    {
        printf("Digite o valor do salario ou um salario negativo para encerrar a entrada de dados:");
        scanf("%f", &salario);
        if (salario <= 0)
        {
            totalSalario += salario;

            printf("Informe o numero de filhos: ");
            scanf("%d", &numFilhos);
            totalFilhos += numFilhos;
            if (salario > maiorSalario)
            {
                maiorSalario = salario;
            }

            if (salario <= 100)
            {
                salarioAte100++;
            }

            i++;
        }
    } while (salario >= 0);
    
        float mediaSalario = totalSalario / i;
        float mediaFilhos = (float)totalFilhos / i;
        float percentualSalario100 = (float)salarioAte100 / i * 100;

        printf("Media do salario da populacao: R$%.2f\n", mediaSalario);
        printf("Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("Maior salario: R$%.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$100.00: %.2f%%\n", percentualSalario100);
    
}