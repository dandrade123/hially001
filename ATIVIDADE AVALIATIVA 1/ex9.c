#include <stdio.h>
/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.*/
int main()
{
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votoNulo = 0, votoBranco = 0;

    do
    {
        
        printf("Digite o codigo para seu candidato: \n(1) Para candidato 1 \n(2) Para candidato 2 \n(3) Para candidato 3 \n(4) Para candidato 4 \n(4) Para candidato 4 \n(5) Para voto nulo \n(6) Para voto em branco ");
        scanf(" %d", &voto);

        if (voto == 1) {
            candidato1++;
        } else if (voto == 2) {
            candidato2++;
        } else if (voto == 3) {
            candidato3++;
        } else if (voto == 4) {
            candidato4++;
        } else if (voto == 5) {
            votoNulo++;
        } else if (voto == 6) {
            votoBranco++;
        }
    } while (voto != 0);

    printf("O total de votos do candidato 1 :%d\n", candidato1);
    printf("O total de votos do candidato 2 :%d\n", candidato2);
    printf("O total de votos do candidato 3 :%d\n", candidato3);
    printf("O total de votos do candidato 4 :%d\n", candidato4);
    printf("O total de votos nulos :%d\n", votoNulo);
    printf("O total de votos brancos :%d\n", votoBranco);
}