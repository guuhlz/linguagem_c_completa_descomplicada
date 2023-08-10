/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endere-
 * ços e exiba o maior endereço.  */


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero1 = 10, numero2 = 20;

    if(&numero1 > &numero2) printf("1 - %p\n",&numero1);
    else printf("2 - %p\n",&numero2); 
    return 0;
}
