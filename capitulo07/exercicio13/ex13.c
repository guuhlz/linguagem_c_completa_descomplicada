/* 13) Escreva um programa que recebe uma string S e dois valores inteiros não negati-
vos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char str[32];
  int i,j;

  printf("Frase: ");
  fgets(str,32,stdin);
  printf("I: ");
  scanf("%d",&i);
  printf("J: ");
  scanf("%d",&j);

  for(int k=i-1;k<j-1;k++) printf("%c",str[k]);
  return 0;
}
