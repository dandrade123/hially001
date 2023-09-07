#include<stdio.h>
#include<math.h>

int main(){
    int  a, b, c;

    float delta,resultado, resultadoNegativo, resultadoPositivo;

    printf("Entre com o valor de a:");
    scanf("%d", &a);
    printf("Entre com o valor de b:");
    scanf("%d", &b);
    printf("Entre com o valor de c:");
    scanf("%d", &c);

    delta = (b * b) - 4*a*c;

    if (delta<0){

        printf("Não existe raiz");

    }else if(delta == 0){

        resultado = (-b+(sqrt(delta)))/(2*a);
        printf("Raiz  unica e %.0f", resultado);

    }else if (delta > 0){

        resultadoPositivo = (-b+(sqrt(delta)))/(2*a);
        resultadoNegativo = (-b-(sqrt(delta)))/(2*a);

        printf("A raiz um e %.0f e a dois e %.0f", resultadoNegativo, resultadoPositivo);

    }
    
    
}
