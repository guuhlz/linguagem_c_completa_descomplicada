/*  
3) Faça um programa que leia três valores inteiros e mostre sua soma.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero1, numero2, numero3;

    printf("Valor 1: ");
    scanf("%d",&numero1);

    printf("Valor 2: ");
    scanf("%d",&numero2);

    printf("Valor 3: ");
    scanf("%d",&numero3);

    printf("Soma: %d",numero1+numero2+numero3);
    return 0;
}
