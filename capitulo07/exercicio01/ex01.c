/*1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s[80];

    printf("String: ");
    fgets(s,30,stdin);
    printf("%s",s);
    return 0;
}
