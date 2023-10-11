#include <stdio.h>

int main() {
    int idade, total_respostas = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int idade_ruim_total = 0, maior_idade_pessimo = 0, maior_idade_otimo = 0;
    char opiniao;

    for (int i = 0; i < 100; i++) {
        printf("Informe a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Informe a opinião (A/B/C/D/E) do espectador %d: ", i + 1);
        scanf(" %c", &opiniao);

        if (opiniao == 'A') {
            otimo++;
            if (idade > maior_idade_otimo) {
                maior_idade_otimo = idade;
            }
        } else if (opiniao == 'B') {
            bom++;
        } else if (opiniao == 'C') {
            regular++;
        } else if (opiniao == 'D') {
            ruim++;
            idade_ruim_total += idade;
        } else if (opiniao == 'E') {
            pessimo++;
            if (idade > maior_idade_pessimo) {
                maior_idade_pessimo = idade;
            }
        }

        total_respostas++;
    }

    double diferenca_percentual = ((double)bom / total_respostas - (double)regular / total_respostas) * 100;
    double media_idade_ruim = (idade_ruim_total > 0) ? (double)idade_ruim_total / ruim : 0;
    double percentual_pessimo = ((double)pessimo / total_respostas) * 100;
    int diferenca_idade = maior_idade_otimo - maior_idade_pessimo;

    printf("Quantidade de respostas Ótimo: %d\n", otimo);
    printf("Diferença percentual entre respostas Bom e Regular: %.2lf%%\n", diferenca_percentual);
    printf("Média de idade das pessoas que responderam Ruim: %.2lf\n", media_idade_ruim);
    printf("Percentagem de respostas Péssimo: %.2lf%%\n", percentual_pessimo);
    printf("Maior idade que utilizou a opção Péssimo: %d\n", maior_idade_pessimo);
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e Ruim: %d\n", diferenca_idade);

    return 0;
}