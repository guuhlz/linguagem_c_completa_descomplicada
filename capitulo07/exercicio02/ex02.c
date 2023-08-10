/*2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s[80];
    printf("String: ");
    fgets(s,80,stdin);

    for(int k=0;k<4;k++)
    {
        printf("%c",s[k]);
    }    
    printf("\n");
    return 0;
}
