/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
 * considerando números maiores que 0.
 */



#include <stdio.h>

int main(int argc, const char *argv[])
{
	int numero = 0;
	
	for (int i = 0; i<5;i++)
	{
		printf("%d\n",3*(i+1));
	}

	
	return 0;
	
}
