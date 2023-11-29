#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {

setlocale(LC_ALL, "portuguese");

int i;
int numero[5];
int par = 0;
int somapar = 0;
int impar = 0;
float mediatotal = 0;
float mediapar = 0;
int negativo = 0;
int maior = 0;
int menor = 9999;
int somatotal = 0;
int qtdtotal = 0;
  
for (i = 0; i < 5; i++) {

  printf(" Digite o %d° número: ", i + 1);
  scanf("%d", &numero[i]);

 qtdtotal++;
 somatotal += numero [i];

  if(numero[i] % 2 == 0){
  
  par++;
  somapar += numero[i];
  
  } else {
  
    impar++;
  }

   if(numero[i] < 0){
   negativo++;
  }


     
if(numero[i] > maior){

  maior = numero[i];
}
if (numero[i] < menor){

 menor = numero[i];
 }
}

mediapar = somapar / (float) par;
mediatotal = somatotal / (float)qtdtotal;

printf("\n");
system("cls || clear");
  
//mostrando dados//
  
for( i = 0; i < 5; i++){

  printf(" %d° número: %d° \n", i + 1, numero[i]);
}

printf("\n");
  
printf(" quantidade de números ímpares: %d \n", impar);

printf(" quantidade de números negativos: %d \n", negativo);

printf(" maior número: %d, menor número %d \n", maior, menor);

printf(" média dos números pares: %f \n", mediapar);

printf(" média total: %.1f \n", mediatotal);
  
  return 0;
  }
