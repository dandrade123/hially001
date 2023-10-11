#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int vetor[10];
    int primos[10];
    int posicoes[10];
    int numPrimos = 0;

    // Leitura dos valores e identificação dos números primos
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (ehPrimo(vetor[i])) {
            primos[numPrimos] = vetor[i];
            posicoes[numPrimos] = i;
            numPrimos++;
        }
    }

    // Impressão dos números primos e suas posições
    printf("Números primos no vetor e suas posições:\n");
    for (int i = 0; i < numPrimos; i++) {
        printf("Primo: %d, Posição: %d\n", primos[i], posicoes[i]);
    }

    return 0;
}
