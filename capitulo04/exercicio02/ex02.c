/*
2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero1 = 0;
    int numero2 = 0;

    printf("Numero 1: ");
    scanf("%d",&numero1);
    printf("Numero 2: ");
    scanf("%d",&numero2);

    if(numero1 == numero2)
    {
        printf("Numeros iguais");
    }
    else if( numero1 > numero2)
    {
        printf("Numero 1 maior");
    }
    else
    {
        printf("Numero 2 maior");
    }
    return 0;
}
