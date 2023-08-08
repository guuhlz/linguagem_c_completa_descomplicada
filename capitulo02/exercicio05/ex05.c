/*
5) Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numero = 0.f;
    printf("Digite um número: ");
    scanf("%f",numero);
    printf("Valor lido: %d\n",numero);
    return 0;
}
