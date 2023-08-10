/* 7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char frase1[32],frase2[32];
  int tam;
  char aux;
  int cont = 0;

  printf("Frase: ");
  fgets(frase1,32,stdin);

  tam = strlen(frase1);


  for(int k=0; k<(tam/2);k++){
    aux = frase1[k];
    frase2[k] = frase1[tam - (k+1)];
    frase2[tam - (k+1)] = aux;
  }

  
  for(int k=0; k<tam-1; k++){
    if(frase1[k] == frase2[k+1]) cont++;
    printf("%c - %c\n", frase1[k],frase2[k+1]);
  }

  if(cont == tam-1){
    printf("Palindromo\n");
  }else {
    printf("Nao palindromo\n");
  }




  
  return 0;
}
