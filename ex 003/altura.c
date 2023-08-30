#include <stdio.h>

main() {

    float altura;

    printf("digite sua altura");
    scanf("%f", &altura);

    if(altura >=1.80){

        printf(" a altura maior que a média");
    }

    else {

        printf("altura menor que a media");
    }

}