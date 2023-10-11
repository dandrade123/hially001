#include <stdio.h>

int main() {
    int vetor[10];
    int u1[10]; // Vetor para valores ímpares
    int u2[10]; // Vetor para valores pares
    int count_u1 = 0; // Contador para elementos em u1
    int count_u2 = 0; // Contador para elementos em u2

    // Leitura dos valores
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Copia os valores ímpares para u1 e os pares para u2
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            u2[count_u2] = vetor[i];
            count_u2++;
        } else {
            u1[count_u1] = vetor[i];
            count_u1++;
        }
    }

    // Imprime os elementos UTILIZADOS de u1
    printf("Elementos UTILIZADOS de u1:\n");
    for (int i = 0; i < count_u1; i++) {
        printf("%d ", u1[i]);
    }
    printf("\n");

    // Imprime os elementos UTILIZADOS de u2
    printf("Elementos UTILIZADOS de u2:\n");
    for (int i = 0; i < count_u2; i++) {
        printf("%d ", u2[i]);
    }
    printf("\n");

    return 0;
}
