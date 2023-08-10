/* 9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira. */

#include <stdio.h>
#include <string.h>

#define TAM 128

int main (int argc, char *argv[])
{
  char frase1[TAM];
  char frase2[TAM];
  int tam1,tam2;
  int cont = 0;

  printf("Frase1: ");
  fgets(frase1,TAM,stdin);
  printf("Frase2: ");
  fgets(frase2,TAM,stdin);

  tam1 = strlen(frase1);
  tam2 = strlen(frase2);

  frase1[tam1-1] = '\0';
  frase2[tam2-1] = '\0';

  if(tam2 > tam1){
    printf("|%s| Nao contida na |%s|\n",frase2,frase1);
    return 0;
  }

  int igual= 0;

  for(int k=0; k<(tam1-1);k++){
    for(int l=0; l<(tam2-1);l++){
      if(frase1[k] == frase2[l+cont]){
        cont++;
        break;
      }
    }
    if(cont == (tam2-1)){
      igual++;
      cont = 0;
    }
  }

  if(igual>0){
      printf("|%s| Contida %d vezes |%s|\n",frase2,igual,frase1);
  }else{
      printf("|%s| Nao contida na |%s|\n",frase2,frase1);
  }


  return 0;
}
