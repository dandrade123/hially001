#include <stdio.h>

int main()
{
    char olhos, cabelos, sexo;
    int idade, totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0;
    float salario, porcentagem;

    do
    {
        totalHabitantes++;
        // validar o sexo
        do
        {
            fflush(stdin);
            printf("Digite o sexo: (m ou f)");
            scanf("%c", &sexo);
            if (sexo == 'm')
            {
                totalM++;
            }
            else
            {
                totalF++;
            }

            if (sexo != 'm' && sexo != 'f')
            {
                printf("Opcao invalida. Digite novamente");
            };
        } while (sexo != 'm' && sexo != 'f');
        // validar cor dos olhos

        do
        {
            fflush(stdin);
            printf("Digite a cor dos olhos: (v - verde, p - preto, a - azul, c - castanho)");
            scanf("%c", &olhos);
            if (olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c')
            {
                printf("Opcao invalida");
            }

        } while (olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c');

        // validar cor dos cabelos
        do
        {
            fflush(stdin);
            printf("Digite a cor dos cabelos: (L-loiro, P-preto, R-ruivo, C-castanho)");
            scanf("%c", &cabelos);
            if (cabelos != 'c' && cabelos != 'l' && cabelos != 'p' && cabelos != 'r')
            {
                printf("Opcao invalida");
            }

        } while (cabelos != 'c' && cabelos != 'l' && cabelos != 'p' && cabelos != 'r');

        // validar salario
        do
        {
            printf("Digite o salario");
            scanf("%f", &salario);
            if (salario < 0)
            {
                printf("Valor invalido");
            }
        } while (salario < 0);

        // validar idade
        do
        {
            printf("Digite a idade");
            scanf("%d", &idade);
            if (idade < 10 || idade > 100)
            {
                printf("Valor invalido");
            }
        } while (idade < 10 || idade > 100);

        // contar pessoa com caracteristicas especificas

        if (sexo == 'f' && cabelos == 'c' && olhos == 'c' && (idade > 18 && idade < 35))
        {
            totalEspecifico++;
        }

        printf("deseja registrar um novo habitante? 2 sim, -1Nao");
        scanf("%d", &idade);

    } while (idade != -1);

    porcentagem = (float)totalEspecifico / totalHabitantes * 100;

    printf("\nTotal de Habitantes cadastrados:%d", totalHabitantes);
    printf("\nTotal de homens cadastrados:%d", totalM);
    printf("\nTotal demulheres cadastrados:%d", totalF);
    printf("\nTotal de pessoas com caracteristicas especificas:%d", totalEspecifico);
    printf("\nPorcentagem de pessoas com caracteristicas especificas:%f", porcentagem);

}
