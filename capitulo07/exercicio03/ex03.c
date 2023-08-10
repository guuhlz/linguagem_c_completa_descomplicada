/* 3) Sem usar a função strlen(), faça um programa que leia uma string e imprima
 * quantos caracteres ela possui. */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s[80];
    int cont =0;
    printf("String: ");
    fgets(s,80,stdin);

    for(int k=0; s[k]!='\n';k++)
    {
        cont += 1;
    }
    printf("%d\n",cont);
    return 0;
}
