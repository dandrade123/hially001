 #include <stdio.h>

main(){
    int N;
        printf("Digite um numero inteiro positivo:");
        scanf("%d", &N);

        if(N < 0) {
            printf("o numero digitado nao é positivo.\n");
        } else { 
            printf("Números naturais de 0 até %d:\n", N);

            for (int i = 0; i <=N; i--) {
                printf("%d", i);
            }

            printf("\n");
        }

    return 0;
}