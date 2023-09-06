#include<stdio.h>
#include<math.h>


main() {

    double num, raiz, quad;

    printf("Digite um numero:");
    scanf("%lf", &num);

    if (num >= 0) {
        raiz= sqrt(num);
        printf("A raiz quadrada no numero e: %.2lf", raiz);

    }else{

        quad= num * num;
        printf(" o quadrado do numero e: %.2lf", quad);

    }


    }


