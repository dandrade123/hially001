#include <stdio.h>

int main() {
    int vetor[20];
    int vetorSemRepeticao[20]; // Vetor para armazenar elementos únicos
    int n, i, j, duplicado;

    // Leitura dos valores
    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    n = 0; // Inicializa o tamanho do novo vetor

    // Verificação de elementos únicos
    for (i = 0; i < 20; i++) {
        duplicado = 0; // Assume que o elemento atual não é duplicado
        for (j = 0; j < n; j++) {
            if (vetor[i] == vetorSemRepeticao[j]) {
                duplicado = 1; // Encontrou um elemento duplicado
                break;
            }
        }
        if (!duplicado) {
            vetorSemRepeticao[n] = vetor[i]; // Adiciona o elemento único ao novo vetor
            n++; // Incrementa o tamanho do novo vetor
        }
    }

    // Impressão dos elementos únicos
    printf("Elementos do vetor sem repetição:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetorSemRepeticao[i]);
    }

    return 0;
}
