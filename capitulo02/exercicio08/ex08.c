/*
8) Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero1 = 0;
    int numero2 = 0;

    printf("Digite dois numeros:\n");
    scanf("%d %d",&numero1,&numero2);
    printf("Valor 2: %d \nValor 1: %d\n",numero2,numero1);

    return 0;
}
