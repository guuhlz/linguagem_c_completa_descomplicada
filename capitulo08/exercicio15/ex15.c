/* 5) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que 
inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo. */

#include <stdio.h>

union tipo{
  int inteiro;
  float ponto_flutuante;
};

int main (int argc, char *argv[])
{
  float f;
  union tipo t;

  printf("Ponto flutunate: ");
  scanf("%f",&f);
  t.ponto_flutuante = f;

  printf("%f - %d\n",t.ponto_flutuante,t.inteiro);

  return 0;
}
