/* 2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
 * teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior ende-
 * reço. */


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero1 =0, numero2 =0;

    printf("Numero1: ");
    scanf("%d",&numero1);
    printf("Numero2: ");
    scanf("%d",&numero2);

    if(&numero1 > &numero2) printf("1 - %p",&numero1);
    else printf("2 - %p",&numero2);

    return 0;
}
