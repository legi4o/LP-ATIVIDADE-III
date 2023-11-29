#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void) {

setlocale(LC_ALL, "portuguese");

int i;
int codigo = 0 ;
char nome[100][200];
float preco[100];
int quantidade[100];
int venda = 0;

do{

printf(" 1 - ADICIONAR UMA NOVA VENDA");
printf(" 2 - VERIFICAR TOTOAL DE VENDAS REALIZADAS");
printf("\n");
printf(" Digite o código da opção desejada: ");
scanf("%d", &codigo);


    fflush(stdin);
    

    if(codigo == 1){
    printf(" Digite o nome do produto: ");
    scanf("%s", &nome[1]);
    printf("\n");
    printf(" Digite o preço do produto: ");
    scanf("%f", &preco[1]);
    printf("\n");
    printf(" Digite a quantidade do produto: ");
    scanf("%d", &quantidade[1]);
    printf("\n");


    venda++;
      
    } else if (codigo == 2){

     for(i = 0; i < venda; i++){

      printf(" %d° Venda: %d \n", i+1, venda);
      printf(" Nome do produto: %s", nome[1]);
      printf("\n");
      printf(" Preço do produto: %.1f", preco[1]);
      printf("\n");
      printf(" Quantidade do produto: %d", quantidade[1]);
      printf("\n");
}
    }

} while (codigo == 1);




  
  return 0;
}