/*
8) Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:
Categoria
Infantil A
Infantil B
Juvenil A
Juvenil B
Sênior
Idade
5-7
8-10
11-13
14-17
maiores de 18 anos
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade = 0;

    printf("Idade: ");
    scanf("%d",&idade);

    if(idade >=5 && idade <=7)
    {
        printf("Infantil A");
    }
    else if(idade >=8 && idade <=10)
    {
        printf("Infantil B");
    }else if(idade >=11 && idade <=13)
    {
        printf("Juvenil A");
    }
    else if (idade >= 14 && idade <=17)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Senior");
    }


    return 0;
}
