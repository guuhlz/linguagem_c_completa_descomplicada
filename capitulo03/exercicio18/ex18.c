/*

17) Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    unsigned char  numero = 0;

    printf("Numero inteiro: ");
    scanf("%c",&numero);
    numero = ~numero;
    printf("Complemento: %d\n",numero);
    return 0;
}
