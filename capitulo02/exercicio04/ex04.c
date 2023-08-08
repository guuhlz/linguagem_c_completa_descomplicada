/*
4) Faça um programa que leia um número inteiro e depois o imprima usando o ope-
rador “%f”. Veja o que aconteceu.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Digite um número: ");
    scanf("%d",&numero);
    printf("%f",numero);

    return 0;
}
