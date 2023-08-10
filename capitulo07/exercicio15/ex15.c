/* 15) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a
ordem em que elas apareceriam em um dicionário. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char frase[64];
  int aux;

  printf("Frase: ");
  fgets(frase,64,stdin);

  for(int k=0; k<strlen(frase)-1; k++){
    for(int l=k+1; l<strlen(frase)-1; l++){
      if(frase[k] > frase[l]){
        aux = frase[k];
        frase[k] = frase[l];
        frase[l] = aux;
      }
    }
  }

  puts(frase);
  
  return 0;
}
