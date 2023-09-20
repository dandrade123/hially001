#include <stdio.h>

main(){
    int contador= 0;
    int numero= 1;

    printf("Os cincos primeiros numeros multiplos de 3 sao maiores que 0 são: \n");

    while (contador < 5){
        if(numero % 3 == 0){
            printf("%d\n", numero);
            contador++;
        
        }
        numero++;
    }
    return 0;

}