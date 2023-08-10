/*  Elabore uma função que receba duas strings como parâmetros e verifique se a se-
gunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar
os caracteres das strings. */

#include <stdio.h>
#include <string.h>

void comparaString(char frase1[], char frase2[]);

int main (int argc, char *argv[])
{
    char frase1[80];
    char frase2[80];

    printf("String 1: ");
    fgets(frase1,80,stdin);
    printf("String 2: ");
    fgets(frase2,80,stdin);

    comparaString(frase1,frase2);
    return 0;
}

void comparaString(char frase1[], char frase2[]){
  int tam1,tam2;
  int cont = 0;
  tam1 = strlen(frase1);
  tam2 = strlen(frase2);

  frase1[tam1-1] = '\0';
  frase2[tam2-1] = '\0';

  if(tam2 > tam1){
    printf("|%s| Nao contida na |%s|\n",frase2,frase1);
  }

  for(int k=0; k<(tam1-1);k++){
    for(int l=0; l<(tam2-1);l++){
      if(*(frase1+k) == *(frase2+l+cont)){
        cont++;
        break;
      }
    }
  }
  if(cont == (tam2-1)){
      cont=0;
      printf("|%s| Contida na |%s|\n",frase2,frase1);
  }else{
      printf("|%s| Nao contida na |%s|\n",frase2,frase1);
  }

}





