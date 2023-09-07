#include<stdio.h>

int main(){
    int prato, sobremesa, bebida, totalDeCalorias;


    printf("Escolha o numero do prato:\n1 - vegetariano\n2 – Peixe\n3 – Frango\n4 – Carne\n");
    scanf("%d", &prato);

    printf("Ecolha qual o numero da sobremesa:\n1 – Abacaxi\n2 – Sorvete diet\n3 – Mouse diet\n4 – Mouse chocolate\n");
    scanf("%d", &sobremesa);

    printf("Escolha qual numero da bebida:\n1 – Chá\n2 - Suco de laranja\n3 – Suco de melão\n4 – Refrigerante diet\n");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1:
        prato = 180;
        break;
    case 2:
        prato = 230;
        break;
    case 3:
        prato = 250;
        break;
    case 4:
        prato = 350;
        break;
    default:
        printf("Esse numero nao corresponde a nenhum prato\n");
        break;
    }
    switch (sobremesa)
    {
    case 1:
        sobremesa = 75;
        break;
    case 2:
        sobremesa = 110;
        break;
    case 3:
        sobremesa = 170;
        break;
    case 4:
        sobremesa = 200;
        break;
    default:
    printf("Esse numero nao corresponde a nenhum sobremesa\n");
        break;
    }
    switch (bebida)
    {
    case 1:
        bebida = 20;
        break;
    case 2:
        bebida = 70;
        break;
    case 3:
        bebida = 100;
        break;
    case 4:
        bebida = 65;
        break;
    default:
    printf("Esse numero nao corresponde a nenhum bebida\n");
        break;
    }
    if (prato > 179 && prato < 351 && sobremesa > 74 && sobremesa < 201 && bebida > 19 && bebida < 99){
        totalDeCalorias = prato + sobremesa + bebida;
        printf("O total de calorias da sua refeicao e %dcal\n", totalDeCalorias );
    }
    
}
