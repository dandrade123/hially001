#include <stdio.h>

int main(){
    int N;

    printf("digite um numero inteiro N: ");
    scanf("%d", &N);

    printf(" os primeiros %d números naturais impares são:\n", N);

    int numeroImpar = 1;

    while(N > 0) {
        printf("%d", numeroImpar);

        numeroImpar +=2;

        N--;
    }

        printf("\n");

        return 0;
}