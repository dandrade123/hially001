#include <stdio.h>

int main() {
    int numero_pessoas = 10;
    int num_homens = 0, num_mulheres = 0;
    double altura_total = 0.0, altura_homens = 0.0, altura_mulheres = 0.0;
    double peso_total = 0.0, peso_homens = 0.0, peso_mulheres = 0.0;

    for (int i = 0; i < numero_pessoas; i++) {
        char sexo;
        double altura, peso;

        printf("Informe o nome da pessoa %d: ", i + 1);
        // Aqui você pode adicionar a leitura do nome se desejar.

        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Informe a altura (em metros): ");
        scanf("%lf", &altura);

        printf("Informe o peso (em kg): ");
        scanf("%lf", &peso);

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            altura_homens += altura;
            peso_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            altura_mulheres += altura;
            peso_mulheres += peso;
        } else {
            printf("Sexo inválido. Informe M para masculino ou F para feminino.\n");
            i--;  // Repetir a entrada para a mesma pessoa.
        }

        altura_total += altura;
        peso_total += peso;
    }

    double altura_media_homens = (num_homens > 0) ? altura_homens / num_homens : 0.0;
    double altura_media_mulheres = (num_mulheres > 0) ? altura_mulheres / num_mulheres : 0.0;
    double altura_media_grupo = altura_total / numero_pessoas;
    double peso_media_homens = (num_homens > 0) ? peso_homens / num_homens : 0.0;
    double peso_media_mulheres = (num_mulheres > 0) ? peso_mulheres / num_mulheres : 0.0;
    double peso_media_grupo = peso_total / numero_pessoas;

    printf("Número de homens: %d\n", num_homens);
    printf("Número de mulheres: %d\n", num_mulheres);
    printf("Altura média dos homens: %.2lf metros\n", altura_media_homens);
    printf("Altura média das mulheres: %.2lf metros\n", altura_media_mulheres);
    printf("Altura média do grupo: %.2lf metros\n", altura_media_grupo);
    printf("Peso médio dos homens: %.2lf kg\n", peso_media_homens);
    printf("Peso médio das mulheres: %.2lf kg\n", peso_media_mulheres);
    printf("Peso médio do grupo: %.2lf kg\n", peso_media_grupo);

    return 0;
}