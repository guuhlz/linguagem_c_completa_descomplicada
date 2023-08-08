/*
9) Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numero1 = 0.f;
    float numero2 = 0.f;
    printf("Digite dois numeros float:\n");
    scanf("%f %f",&numero2,&numero1);
    printf("Valor 2: %f\n Valor 1: %f\n",numero2,numero1);
}