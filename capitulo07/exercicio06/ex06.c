/* 6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela
possui. */

#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
  char frase[64];
  int cont = 0;
  char c;
  
  printf("Frase: ");
  fgets(frase,64,stdin);

  int tam = strlen(frase);

  for(int k=0; k<(tam-1); k++){
    if(frase[k] == 'a' || frase[k] == 'e' || frase[k] == 'i' 
        || frase[k] == 'o' || frase[k] == 'u'){
        cont++;
    }
  }
  printf("Quantidade de vogais: %d\n",cont);

  printf("Substituir vogal por: ");
  c = getc(stdin);

  for(int k=0; k<(tam-1); k++){
      if(frase[k] == 'a' || frase[k] == 'e' || frase[k] == 'i' 
          || frase[k] == 'o' || frase[k] == 'u'){
          frase[k] = c;
      }
    }

  puts(frase);

  return 0;
}


