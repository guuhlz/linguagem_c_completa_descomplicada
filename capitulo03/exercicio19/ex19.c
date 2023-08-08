/*

19) Elabore um programa que leia dois números inteiros e exiba o resultado das ope-
rações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.

*/

#include <stdio.h>
int main (int argc, char *argv[]) {
  
  int num1,num2;

  printf("Numero 1:");
  scanf("%d",&num1);
  printf("Numero 2:");
  scanf("%d",&num2);

  printf("Num1 XOR Num2: %d\nNum1 OR Num2: %d\nNum1 AND Num2: %d\n",num1^num2,num1|num2,num1&num2);
  
  return 0;
}

