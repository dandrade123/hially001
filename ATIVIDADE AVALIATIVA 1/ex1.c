#include <stdio.h>
#include <math.h>

/*Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 5x+3/√x²-16:
*/

int main()
{
    int x;
    float f;
    printf("Digite um valor para x para a função f(x) = 5x+3:\n                                           /                \n                                           √x²-16 ");
    scanf("%d", &x);

    f = (float)(5 * x + 3) / sqrt(x * x - 16);

    printf("O resultado da função f(x) é: %.5f", f);
}