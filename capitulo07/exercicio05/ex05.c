/* 5) Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char frase[32];
  int cont = 0;
  char aux;

  printf("Frase: ");
  fgets(frase,32,stdin);

  int tam = strlen(frase);

  for(int k=0; k<(tam/2);k++){
    aux = frase[k];
    frase[k] = frase[tam - (k+1)];
    frase[tam - (k+1)] = aux;
  }
  puts(frase);
  return 0;
}
