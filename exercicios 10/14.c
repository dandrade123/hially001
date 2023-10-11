#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int temValoresIguais = 0;

    // Leitura dos valores
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verificação de valores iguais
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                temValoresIguais = 1;
                printf("Valores iguais encontrados: %d e %d\n", vetor[i], vetor[j]);
            }
        }
    }

    if (!temValoresIguais) {
        printf("Não foram encontrados valores iguais no vetor.\n");
    }

    return 0;
}
