/*
6) Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double numero = 1000000;
    // printf("Digite um numero: ");
    // scanf("%lf",numero);
    printf("Valor lido: %E\n",numero);
    return 0;
}
