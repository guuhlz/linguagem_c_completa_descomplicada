/*
 * 1) Faça um programa que leia um número inteiro positivo N e imprima todos os
 * números naturais de 0 até N em ordem crescente.
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int numero = 0;
	int k      = 0;
	printf("Numero: ");
	scanf("%d",&numero);

	for(k = 0;k<(numero+1);k++)
	{
		printf("%d\n",k);
	}
	return 0;
}
