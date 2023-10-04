#include <stdio.h>

/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

int main()
{
    float alturaChico = 1.50, alturaZe = 1.10;
    int anos = 0;
    
    while (alturaChico > alturaZe)
    {
        alturaChico += 0.02;
        alturaZe += 0.03;
        anos++;
    }

    printf("Daqui a %d anos Chico e Zé terão a mesma altura.", anos);
}