#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    float notas[5][3];
    int idade[5];
    float media[5];
    int somanotas;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf(" Digite o nome do %dº aluno: ", i + 1);
        gets(nome[i]);
        printf(" Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf(" Digite a %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somanotas += notas[i][j];
        }

        media[i] = somanotas / (float)j;
        somanotas = 0;

        printf("\n");
        fflush(stdin);
    }

    system("cls || clear");

    for (i = 0; i < 5; i++)
    {
        printf("\n %dº aluno: %s \n", i + 1, nome[i]);

        for (j = 0; j < 3; j++)

        {
            printf(" %dº nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf(" Média: %.1f \n", media[i]);

        if (media[i] >= 7)
        {
            printf(" APROVADO\n");
        }
        else if (media[i] < 7 && media[i] > 5 || media[i] == 5)
        {
            printf(" RECUPERAÇÃO\n");
        }
        else if (media[i] < 5)
        {
            printf(" REPROVADO\n");
        }
    }

    return 0;
}