#include <stdio.h>

char validaSexo();
float validaSalario();
void classificaSalario(float salario, float salarioMinimo, char *classificacao);
void mostraClassificacao(float salario, char sexo, char *classificacao);
void contaAssalariados(float salario, float salarioMinimo, int *abaixo, int *acima);

int main() {
    const float salarioMinimo = 1400.0;
    int numAssalariados, abaixoSalario = 0, acimaSalario = 0;

    printf("Digite o numero de assalariados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; ++i) {
        char sexo = validaSexo();
        float salario = validaSalario();

        char classificacao[20];
        classificaSalario(salario, salarioMinimo, classificacao);

        mostraClassificacao(salario, sexo, classificacao);

        contaAssalariados(salario, salarioMinimo, &abaixoSalario, &acimaSalario);
    }

    printf("\nTotal de assalariados abaixo do salario minimo: %d\n", abaixoSalario);
    printf("Total de assalariados acima do salario minimo: %d\n", acimaSalario);

    return 0;
}

char validaSexo() {
    char sexo;
    do {
        printf("Digite o sexo (M - Masculino / F - Feminino): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Sexo invalido. Por favor, digite M ou F.\n");
        }

    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Digite o salario (maior que R$1,00): ");
        scanf("%f", &salario);

        if (salario <= 1.0) {
            printf("Salario invalido. Deve ser maior que R$1,00.\n");
        }

    } while (salario <= 1.0);

    return salario;
}

void classificaSalario(float salario, float salarioMinimo, char *classificacao) {
    if (salario > salarioMinimo) {
        strcpy(classificacao, "Acima do salario minimo");
    } else if (salario == salarioMinimo) {
        strcpy(classificacao, "Igual ao salario minimo");
    } else {
        strcpy(classificacao, "Abaixo do salario minimo");
    }
}

void mostraClassificacao(float salario, char sexo, char *classificacao) {
    printf("\n--- Dados do Assalariado ---\n");
    printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao: %s\n", classificacao);
}

void contaAssalariados(float salario, float salarioMinimo, int *abaixo, int *acima) {
    if (salario > salarioMinimo) {
        (*acima)++;
    } else {
        (*abaixo)++;
    }
}
