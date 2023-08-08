/*

16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Numero: ");
    scanf("%d",&numero);

    printf("Divisao por 2: %d\nMultiplicacao por 2: %d \n",numero>>1 , numero<<1);
    return 0;
}
