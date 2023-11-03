#include<stdio.h>

//prototipo da funcao
float entradaTem(){
    float tempF;
    printf("Digite a temperatura em F");
    scanf("%f", &tempF);
    return tempF;
}

float converterC(){
    float tempF = entradaTem(); 
    float celcius = (f - 32) * (5.0/9.0);
    return celcius;
}


main(){
    float tempC = converterC(tempF);

    printf("Temp em celcius: %f", &tempC);
}