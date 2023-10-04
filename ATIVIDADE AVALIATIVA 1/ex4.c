#include <stdio.h>
#include <math.h>

/*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

int main()
{
    int A, B, C;
    double cosseno, anguloDotrianguloemradianos, anguloFinal;
    printf("Entre com um valor para A:");
    scanf("%d", &A);

    printf("Entre com um valor para B:");
    scanf("%d", &B);

    printf("Entre com um valor para C:");
    scanf("%d", &C);

    cosseno = (A * A + B * B - C * C) / (2 * A * B);

    anguloDotrianguloemradianos = acos(cosseno);

    anguloFinal = anguloDotrianguloemradianos * 180.0 / M_PI;

    if (A + B > C && B + C > A && A + C > B)
    {
        if (anguloFinal == 90)
        {
            printf("É um triangulo Retângulo!");
        }
        if (anguloFinal > 90)
        {
            printf("É um triangulo Obtusângulo!");
        }
        if (anguloFinal < 90)
        {
            printf("É um triangulo Acutângulo!");
        }
    }
    else
    {
        printf("Não são valores validos para lados de um triangulo.");
    }
}