/*
 Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
 tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	float altura  = 0.0;
	float peso    = 0.0;

	printf("Altura: ");
	scanf("%f",&altura);
	printf("Peso: ");
	scanf("%f",&peso);
	
	if(altura <= 1.20)
	{
		if(peso <= 60)
		{
			printf("A");
		}
		else if(peso > 61 && peso < 90)
		{
			printf("D");
		}
		else
		{
			printf("G");
		}
	}
  if (altura > 1.20 && altura < 1.70 )
  {
    if(peso <= 60)
    {
      printf("B");
    }
    else if(peso > 61 && peso < 90)
    {
      printf("E");
    }
    else
    {
      printf("H");
    }
  }
  if (altura >= 1.70)
  {
    if(peso <= 60)
    {
      printf("C");
    }
    else if(peso > 61 && peso < 90)
    {
      printf("F");
    }
    else
    {
      printf("I");
    }
  }

    	return 0;
}
