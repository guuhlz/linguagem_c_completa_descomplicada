/*
 15)Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-
as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita
das três variáveis.
*/

#include <stdio.h>

int main (int argc, char const *atgv[])
{
	char letra = ' ';
	int numero = 0;
	float decimal = 0.0;

	printf("Letra: ");
	scanf("%c",&letra);
	printf("Numero: ");
	scanf("%d",&numero);
	printf("Decimal: ");
	scanf("%f",&decimal);

	printf("%c\t%d\t%f",letra,numero,decimal);


}
