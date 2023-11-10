#include <stdio.h>

int validaQuantidade();
float calculaSalario(int quantidade);
void mostraFinal(float salario);

int main() {
    int quantidade;
    char opcao;

    do {
        quantidade = validaQuantidade();
        float salario = calculaSalario(quantidade);
        mostraFinal(salario);

        printf("\nDeseja calcular o salario de outro funcionario? (S - Sim / N - Nao): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}

int validaQuantidade() {
    int quantidade;
    do {
        printf("Digite a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Quantidade invalida. Por favor, digite um valor positivo.\n");
        }

    } while (quantidade < 0);

    return quantidade;
}

float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const int limite1 = 50;
    const int limite2 = 80;
    const float adicionalBaixo = 0.50;
    const float adicionalAlto = 0.75;

    float salario = salarioBase;

    if (quantidade > limite1) {
        salario += (quantidade - limite1) * adicionalBaixo;

        if (quantidade > limite2) {
            salario += (quantidade - limite2) * (adicionalAlto - adicionalBaixo);
        }
    }

    return salario;
}

void mostraFinal(float salario) {
    printf("O salário total do funcionario e: R$ %.2f\n", salario);
}
