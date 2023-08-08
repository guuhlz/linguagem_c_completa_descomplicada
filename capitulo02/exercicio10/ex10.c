/*
10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/

#include <stdio.h>

main (int argc, char const *argv[])
{
    int dia = 0;
    int mes = 0;
    int ano = 0;

    printf("Dia: ");
    scanf("%d",&dia);
    printf("Mes: ");
    scanf("%d",&mes);
    printf("Ano: ");
    scanf("%d",&ano);

    printf("%d/%d/%d\n",dia,mes,ano);



}
