#include <stdio.h>

main() {

    float peso;

    printf("digite o seu peso");
    scanf("%f", &peso);

    if(peso >=60){

        printf(" Peso maior que o minimo");
    }

    else {

        printf("Peso menor que a média");
    }

}