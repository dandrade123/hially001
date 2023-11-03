#include<stdio.h>
float calcularImc(float altura, float peso){
    float imc = peso/(altura*altura);
    return imc;
}
void mostrarSituacao(float imc){
    if(imc < 16){
        printf("Abaixo do peso");
    }else if(imc >= 16 && imc < 25){
        printf("Normal");
    }else{
        printf("Acima do peso");
    }
}

main(){
    float alt, peso;
    printf("Digite o peso e a altura");
    scanf("%f %f", &peso, &alt);
    float imc = calcularImc(alt, peso);
    mostrarSituacao(imc);
}