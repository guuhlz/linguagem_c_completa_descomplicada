/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os
 * números naturais de 0 até N em ordem decrescente.
 */


#include <stdio.h>


int main(int argc, const char *argv[])
{
	int numero = 0;

	printf("Numero: ");
	scanf("%d",&numero);

	for(int i = numero; i>=0; i--)
	{
		printf("%d\n",i);
	}	
	
	return 0;
}


