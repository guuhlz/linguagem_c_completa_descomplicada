/* 14) Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.
*/

#include <stdio.h>
int main (int argc, char *argv[]){

  int num1, num2;

  printf("Numero1: ");
  scanf("%d",&num1);

  if(num1 % 5 == 0 && num1 % 3 == 0){
    printf("Divisivel por 5 E 3\n");
  }else if(num1 % 5 == 0 || num1 % 3 == 0){
    printf("Divisivel por 5 OU 3\n");
  }

  return 0;
}
