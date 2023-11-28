#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int idade[5];
    float peso[5];
    float altura[5];
    char nome[5][200];
    float maioraltura = 0;
    float menoraltura = 999;
    float maiorpeso = 0;
    float menorpeso = 999;
    int maioridade = 0;
    int menoridade = 999;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da %dº pessoa: ", i + 1);
        gets(nome[i]);
        printf("\nDigite a idade: ");
        scanf("%d", &idade[i]);
        printf("Digite o peso: ");
        scanf("%f", &peso[i]);
        printf("Digite a altura: ");
        scanf("%f", &altura[i]);

        printf("\n");

        if (altura[i] > maioraltura)
        {
            maioraltura = altura[i];
        }
        if (altura[i] < menoraltura)
        {
            menoraltura = altura[i];
        }

        if (idade[i] > maioridade)
        {
            maioridade = idade[i];
        }

        if (idade[i] < menoridade)
        {
            menoridade = idade[i];
        }

        if (peso[i] > maiorpeso)
        {
            maiorpeso = peso[i];
        }

        if (peso[i] < menorpeso)
        {
            menorpeso = peso[i];
        }

        fflush(stdin);
    }

    system("cls || clear");

    for (i = 0; i < 5; i++)
    {
        printf(" %dº pessoa: %s \n", i + 1, nome[i]);
        printf(" idade: %d \n", idade[i]);
        printf(" peso: %1.f \n", peso[i]);
        printf(" altura: %1.f \n", altura[i]);

        printf("\n");

        fflush(stdin);
    }

    printf(" Maior peso: %1.f, menor peso: %1.f \n", maiorpeso, menorpeso);
    printf(" Maior idade: %d, menor idade: %d \n", maioridade, menoridade);
    printf(" Maior altura: %1.f, menor altura: %1.f \n", maioraltura, menoraltura);

    return 0;
}