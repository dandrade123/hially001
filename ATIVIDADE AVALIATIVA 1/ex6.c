#include <stdio.h>

/* Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */

int main()
{
    float x, y;

    printf("Digite um valor para x");
    scanf("%f", &x);

    printf("Digite um valor para y");
    scanf("%f", &y);

    if (y > 0 && x > 0)
    {
        printf("Está no primeiro quadrante");
    }
    if (y > 0 && x < 0)
    {
        printf("Está no segundo quadrante");
    }
    if (y < 0 && x < 0)
    {
        printf("Está no terceiro quadrante");
    }
    if (y < 0 && x > 0)
    {
        printf("Está no quarto quadrante");
    }
    if (y == 0 && x != 0)
    {
        printf("Está no eixo X");
    }
    if (x == 0 && y != 0)
    {
        printf("Está no eixo Y");
    }
    if (x == 0 && y == 0)
    {
        printf("Está na origem");
    }
}