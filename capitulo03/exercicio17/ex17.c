/*
18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero        = 0;
    int deslocamento  = 0;

    printf("Numero : ");
    scanf("%d",&numero);
    printf("Deslocamento : ");
    scanf("%d",&deslocamento);

    printf("Deslocamento a Direita: %d\nDeslocamento a Esqueda: %d\n",numero<<deslocamento,numero>>deslocamento);
    return 0;
}
