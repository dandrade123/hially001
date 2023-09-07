#include<stdio.h>

int main(){
    int anosDeColaboracao;
    float salarioComReajuste, salarioAtual;

    printf("Digite o salario atual do funcionario:");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de colaboracao do funcionario:");
    scanf("%i", &anosDeColaboracao);

    if (salarioAtual <= 500 && anosDeColaboracao < 1){
        salarioComReajuste = (salarioAtual * (125 / 100));
        printf("O salario com o reajuste e:%.2f", salarioComReajuste);
    }
    if (salarioAtual > 500 && salarioAtual <= 1000 && anosDeColaboracao <= 3 && anosDeColaboracao >= 1){
        salarioComReajuste = (salarioAtual * (120 / 100)+ 100);
        printf("O salario com o reajuste e:%.2f", salarioComReajuste);
    }
    if (salarioAtual > 1000 && salarioAtual <=1500 && anosDeColaboracao <= 6 && anosDeColaboracao >= 4){
        salarioComReajuste = (salarioAtual * (115/100)+ 200);
        printf("O salario com o reajuste e:%.2f", salarioComReajuste);
    }
    if (salarioAtual > 1500 && salarioAtual <= 2000 && anosDeColaboracao <= 10 && anosDeColaboracao >= 7){
        salarioComReajuste = (salarioAtual * (110/100)+ 300);
        printf("O salario com o reajuste e:%.2f", salarioComReajuste);
    }
    if (salarioAtual > 2000 && anosDeColaboracao > 10){
        salarioComReajuste = salarioAtual = 500;
        printf("O salario somente com o bonus e:%.2f", salarioComReajuste);
    }
}
