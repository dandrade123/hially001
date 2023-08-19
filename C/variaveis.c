#include<stdio.h>

main(){
    
//declarações
int num1, num2, soma, mult;
float sub, div;

//entrada de dados
printf("digite o primeiro numeo");
scanf("%d",&num1);

printf("digite o segundo numero");
scanf("%d",&num2);


//operações

soma = num1 + num2;
mult= num1 + num2;
sub = (float)num1 - num2;
div = (float)num1 / num2;

//apresentações dos resultados
printf("\nSoma: %d", soma);
printf("\nMultiplicação: %d", mult);
printf("\nSubtração: %.2f", sub);
printf("\nDivisão: %.2f", div);
}
