/* 13) Faça um programa que mostre ao usuário um menu com quatro opções de ope-
rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado. */

#include <stdio.h>


int main (int argc, char *argv[]) {

  int op;
  float num1 = 0.f, num2 = 0.f;
  
  
  printf("1. +\n2. -\n3. *\n4. /\n");
  scanf("%d",&op);

  printf("Numero 1: ");
  scanf("%f",&num1);
  printf("Numero 1: ");
  scanf("%f",&num2);

  switch (op) {
    case 1:
      printf("%f\n",num1+num2);
    break;
    case 2:
      printf("%f\n",num1-num2);
    break;
    case 3:
      printf("%f\n",num1*num2);
    break;
    case 4:
      if(num2 == 0){
        printf("Divisao por 0\n");
        break;
      }
      printf("%f\n",num1*num2);
    break;
      
    
    default:
      printf("Operacao invalida\n");
      break;
  }

  return 0;
}

  
