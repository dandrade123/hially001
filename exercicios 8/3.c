#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Informe o valor de n para calcular o enésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de n deve ser maior ou igual a zero.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O enésimo termo da sequência de Fibonacci para n = %d é: %d\n", n, resultado);
    }

    return 0;
}