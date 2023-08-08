/*
14) Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = ' ';
    char b = ' ';
    char c = ' ';

    printf("Letra 1: ");
    scanf(" %c",&a);
    printf("Letra 2: ");
    scanf(" %c",&b);
    printf("Letra 3: ");
    scanf(" %c",&c);

    printf("%c\n%c\n%c",a,b,c);
    return 0;
}
