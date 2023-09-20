#include <stdio.h>

main(){
    int codigo;
    float precoUnitario, valorTotal, opcao;
    char abacaxi[12];
    char maca[12];
    char pera[12];
    
    do{
    printf("opcoes de fruta: \n 1-abacaxi (5,00)\n 2-maca (2,00)\n 3-pera (4,00)");
    
        scanf("%d", &codigo);

            switch(codigo){
                case 1:
                precoUnitario= 5.00;
                valorTotal += 5.00;
                    strcpy(abacaxi, "abacaxi");
                    break;

                    case 2:
                    precoUnitario= 2.00;
                    valorTotal += 2.00;
                    strcpy(maca, "maca");

                    break;

                    case 3:
                    precoUnitario= 4.00;
                    valorTotal += 4.00;
                    strcpy(pera, "pera");

                    break;
            }
                printf("deseja fazer uma nova compra? 1- sim 2- nao");
                scanf("%d", &opcao);

    } while (opcao != 0);

}