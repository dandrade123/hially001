#include <stdio.h>

main() {

    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18)
    { 
        printf("a pessoa é maior de idade \n"); 

    } else {
        printf("A pessoa é menor de idade \n");
        
    }
   


}