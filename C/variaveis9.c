#include<stdio.h>

main(){

//variaveis
float custoFabrica, distribuidor = 0.28, imposto = 0.45, custoFinal;

printf("custo de fabrica");
scanf("%f", &custoFabrica);

custoFinal = (custoFabrica * distribuidor) * (custoFabrica * imposto) + custoFabrica;

printf("Custo final de veiculo: R$%2.f", custoFinal);

}
