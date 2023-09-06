#include <stdio.h>

int main() {
    int idade, tempoServico;

        printf("Digite a idade do trabalhador: ");
        scanf("%d", &idade);

        printf("Digite o tempo de serviço (em anos): ");
        scanf("%d", &tempoServico);

    if ((idade >= 65) || (tempoServico >= 30) || (idade >= 60 && tempoServico >= 25)){
        printf("O trabalhador pode se aposentar.");

    } else {
        printf("O trabalhador nao pode se aposentar.");
    }

}