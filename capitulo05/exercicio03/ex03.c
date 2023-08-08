/*3) Faça um programa que leia um número inteiro N e depois imprima os N primei-
 ros números naturais ímpares.
*/



#include <stdio.h>


int main(int argc, const char *argv[])
{
	int numero = 0;

	printf("Numero: ");
	scanf("%d",&numero);

	for(int i = 0; i<=numero; i++)
	{
		if(i%2!=0) printf("%d\n",i);
	}
	return 0;
}


