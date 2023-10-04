#include <stdio.h>

/*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

int main()

{
    int A, B, C;

    printf("Entre com um valor para A:");
    scanf("%d", &A);

    printf("Entre com um valor para B:");
    scanf("%d", &B);

    printf("Entre com um valor para C:");
    scanf("%d", &C);

    if (A + B > C && B + C > A && A + C > B)
    {
        if (A != B != C)
        {
            printf("É um triangulo escaleno!");
        }
        if (A == B == C)
        {
            printf("É um triangulo equilátero!");
        }
        if (A == B != C || A != B == C || A != C == B)
        {
            printf("É um triangulo isósceles!");
        }
    }
    else
    {
        printf("Não são valores validos para lados de um triangulo.");
    }
}