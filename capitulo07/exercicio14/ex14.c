/* 14) O código de César é uma das técnicas de criptografia mais simples e conhecidas.
É um tipo de substituição no qual cada letra do texto é substituída por outra,
que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de
três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
Escreva um programa que faça uso desse código de César para três posições. Entre
com uma string e imprima a string codificada. Exemplo:
		
 String: a ligeira raposa marrom saltou sobre o cachorro cansado
		
 Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char frase1[128];
  int min = 97;

  printf("Frase: ");
  fgets(frase1,128,stdin);
  
  for(int k=0; k<strlen(frase1);k++){
    if(frase1[k] == 120){
      frase1[k] = min;
    }else if(frase1[k] == 121){
      frase1[k] = min + 1 ;
    }else if(frase1[k] == 122){
      frase1[k] = min + 2;
    }else if(frase1[k] == 32) {
      frase1[k] = 32;
    }else {
      frase1[k] = frase1[k] + 3;

    }
  }
  
  puts(frase1);
  return 0;
}



// char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

