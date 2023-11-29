#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void) {

 setlocale (LC_ALL, "portuguese");

int i = 0;
int codigo;
int contato = 0;
char nome[100][200];
char numerotelefone[100][200];

do{

printf(" 1 - ADICIONAR UM NOVO CONTATO");
printf(" 2 - VERIFICAR CONTATOS SALVOS");
printf("\n");
printf(" Digite o código da opção desejada: ");
scanf("%d", &codigo);
printf("\n");

switch (codigo){

  fflush(stdin);
  
  case 1:
  printf(" Digite o nome do contato: ");
  scanf("%s", &nome[contato]);
  printf(" Digite o número de telefone do contato: ");
scanf("%s", &numerotelefone[contato]);

contato++;
    
  break;

  case 2:

  for(i = 0; i < contato; i++){
    printf(" Nome: %s \n", nome[i]);
    printf(" Número do contato: %s \n", numerotelefone[i]);
    
    printf("\n");
  }

break;

  default:
  printf(" Opção inválida! \n");

}

  
} while (codigo != 2);


  
  return 0;
}