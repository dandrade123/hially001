#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
    } else {
        printf("Os divisores do número %d são: ", numero);
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}