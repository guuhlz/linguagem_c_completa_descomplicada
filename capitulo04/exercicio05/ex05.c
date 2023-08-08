/*
5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
•O número digitado ao quadrado.
•A raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float numero = 0.0;

    printf("Numero: ");
    scanf("%f",&numero);

    if (numero > 0)
    {
        printf("%.2f\n%.2f\n",pow(numero,2), sqrt(numero));
    }
    return 0;
}
