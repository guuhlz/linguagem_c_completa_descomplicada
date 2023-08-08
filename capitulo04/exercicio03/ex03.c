/*
3) Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Numero inteiro: ");
    scanf("%d",&numero);

    if(numero%2 == 0)
    {
        printf("Numero par");
    }
    else
    {
        printf("Numero impar");
    }
    return 0;
}
