/* 10) Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char str[128];
  int tam;

  printf("Frase: ");
  fgets(str,128,stdin);

  tam = strlen(str);

  for(int k=0; k<tam;k++){
    if(str[k] >= 97 || str[k] <= 122){
      str[k] -= 32;
    }
  }
  str[tam-1]= '\0';
  puts(str);

  return 0;
}
