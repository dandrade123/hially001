#include <stdio.h>

int main() {
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;
    int matutino = 0, vespertino = 0, noturno = 0;
    int total_usos = 0;

    for (int i = 0; i < 50; i++) {
        char elevador, periodo;

        printf("Informe o elevador mais utilizado (A/B/C): ");
        scanf(" %c", &elevador);

        printf("Informe o período de uso (M/V/N): ");
        scanf(" %c", &periodo);

        if (elevador == 'A') {
            elevadorA++;
        } else if (elevador == 'B') {
            elevadorB++;
        } else if (elevador == 'C') {
            elevadorC++;
        }

        if (periodo == 'M') {
            matutino++;
        } else if (periodo == 'V') {
            vespertino++;
        } else if (periodo == 'N') {
            noturno++;
        }

        total_usos++;
    }

    char periodo_mais_usado;
    int max_usos_periodo = 0;
    char periodo_menos_usado;
    int min_usos_periodo = total_usos;

    if (matutino > max_usos_periodo) {
        max_usos_periodo = matutino;
        periodo_mais_usado = 'M';
    }
    if (vespertino > max_usos_periodo) {
        max_usos_periodo = vespertino;
        periodo_mais_usado = 'V';
    }
    if (noturno > max_usos_periodo) {
        max_usos_periodo = noturno;
        periodo_mais_usado = 'N';
    }

    if (matutino < min_usos_periodo) {
        min_usos_periodo = matutino;
        periodo_menos_usado = 'M';
    }
    if (vespertino < min_usos_periodo) {
        min_usos_periodo = vespertino;
        periodo_menos_usado = 'V';
    }
    if (noturno < min_usos_periodo) {
        min_usos_periodo = noturno;
        periodo_menos_usado = 'N';
    }

    char elevador_mais_frequentado;
    int max_usos_elevador = 0;

    if (elevadorA > max_usos_elevador) {
        max_usos_elevador = elevadorA;
        elevador_mais_frequentado = 'A';
    }
    if (elevadorB > max_usos_elevador) {
        max_usos_elevador = elevadorB;
        elevador_mais_frequentado = 'B';
    }
    if (elevadorC > max_usos_elevador) {
        max_usos_elevador = elevadorC;
        elevador_mais_frequentado = 'C';
    }

    double diferenca_percentual = ((double)max_usos_periodo / total_usos - (double)min_usos_periodo / total_usos) * 100;
    double percentagem_elevador_medio = ((double)(elevadorB * 100) / total_usos);

    printf("Período mais usado de todos: %c (pertence ao elevador %c)\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("Elevador mais frequentado: %c (concentra-se no período %c)\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("Diferença percentual entre o mais usado dos horários e o menos usado: %.2lf%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização (B): %.2lf%%\n", percentagem_elevador_medio);

    return 0;
}