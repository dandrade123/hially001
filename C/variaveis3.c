#include<stdio.h>

main(){
/*

*/
float largura, comprimento, area;

//entrada de dados
printf("Digite a largura");
scanft("%f",&largura);

printf("Digite o comprimento");
scanft("%f",&comprimento);

//calcular a area
area = largura * comprimento;

//apresemta a saida
printf("A area da sala e: %.2fm2", area);

}
