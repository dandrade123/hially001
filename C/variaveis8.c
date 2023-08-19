#include<stdio.h>

main(){
    /*

    
    
    */

   //variaveis
   float salarioAtual,porcentagemReajuste,novoSalario, reajusteFinal;

   printf("Digite o salario atual");
   scanf("%lf", &salarioAtual);

   printf("Digite a porcentagem de reajuste");
   scanf("%lf", &porcentagemReajuste);

   reajusteFinal = porcentagemReajuste/100;

   //calcular o novo salario
   novoSalario = (salarioAtual * reajusteFinal);

   printf("Novo salario: R$%.2f", novoSalario);


}