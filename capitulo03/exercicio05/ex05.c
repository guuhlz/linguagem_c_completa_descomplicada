/*
5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade         = 0;
    int anoAtual      = 0;
    int anoNascimento = 0;

    printf("Idade: ");
    scanf("%d",&idade);
    printf("Ano atual: ");
    scanf("%d",&anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Ano nascimento: %d\n",anoNascimento);
    return 0;
}

