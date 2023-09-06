#include <stdio.h>

int main() {
    int codigo;
    float preco, valorTotal;
    int quantidade;

    printf("Digite o código do item (100 a 104): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            preco = 10.10;
            break;
        case 101:
            preco = 8.30;
            break;
        case 102:
            preco = 8.50;
            break;
        case 103:
            preco = 12.50;
            break;
        case 104:
            preco = 13.25;
            break;
        default:
            printf("Código de item inválido!\n");
            return 1; 
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    valorTotal = preco * quantidade;

    printf("Valor a ser pago: R$ %.2f\n", valorTotal);

    return 0;

}