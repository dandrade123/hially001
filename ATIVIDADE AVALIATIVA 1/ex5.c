#include <stdio.h>
#include <math.h>

/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

int main()
{
    int x1, x2, y1, y2;
    double distancia;

    printf("Digite o  valor para x1:");
    scanf("%d", &x1);
    printf("Digite o  valor para y1:");
    scanf("%d", &y1);
    printf("Digite o  valor para x2:");
    scanf("%d", &x2);
    printf("Digite o  valor para y2:");
    scanf("%d", &y2);

    distancia = (double)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("A distancia entre os pontos (x1,y1) e (x2,y2) é %.4lf", distancia);
}