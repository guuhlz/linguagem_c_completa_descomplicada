/* 4) Faça um programa que leia uma string e a imprima de trás para a frente.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s[80];
    int cont =0;
    printf("String: ");
    fgets(s,80,stdin);

    for(int k =0;s[k]!='\n';k++)
    {
        cont += 1;
    }
    for(int k=cont;k>=0;k--)
    {
        printf("%c",s[k]);
    }
    printf("\n");

    return 0;
}
