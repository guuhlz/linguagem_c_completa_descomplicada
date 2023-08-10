/* 5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
 * Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero[5];

    int *ptr = &numero[0];

    for(int k=0; k<5;k++)
    {
        printf("Numero :");
        scanf("%d",ptr);
        printf("%d\n",(*ptr)*2);
        ptr++;
    }
    return 0;
}
