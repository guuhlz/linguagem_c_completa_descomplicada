/*
13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = sqrt(a^2 + b^2)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float cateto1    = 0.0;
    float cateto2    = 0.0;
    float hipotenusa = 0.0;

    printf("Cateto 1: ");
    scanf ("%f",&cateto1);
    printf("Cateto 2: ");
    scanf ("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("Hipotenusa :%f\n",hipotenusa);
    return 0;
}
