/*
 * Faça um programa que leia três números inteiros positivos e efetue o cálculo de
 * uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
 * rio e mostrado na tabela a seguir:
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int x     = 0;
	int y     = 0;
	int z     = 0;
	int op = 0;
	
	printf("X: ");
	scanf("%d",&x);
	printf("Y: ");
	scanf("%d",&y);
	printf("Z: ");
	scanf("%d",&z);

	printf("1 - Media Geometrica\n 2 - Media Ponderada\n 3 - Media Harmonica\n 4 - Media Aritmetica: ");
	scanf("%d",&op);
	
	if(op == 1)
	{
		printf("%d\n",x*y*z);
	}
	else if (op == 2)
	{
		printf("%f\n",(float) (x + 2 * y + 3 * z)/6);
	}
	else if (op == 3)
	{
		printf("%f\n",(float) 1/(1/x + 1/y + 1/z));
	}
	else if (op == 4)
	{
		printf("%f\n",(float) (x+y+z)/3);
	}
	else
	{
		printf("Opcao invalida\n");
	}

	return 0;	
}
