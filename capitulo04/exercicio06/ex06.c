/*
6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
••••Homens: (72,7 * h) – 58
Mulheres: (62,1 * h) – 44,7
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float altura       = 0.0;
    int sexo = 0;
    float pesoIdeal    = 0;

    printf("Sexo 1(M) - 2(F): ");
    scanf("%d",&sexo);

    printf("Altura (m): ");
    scanf("%f",&altura);

    if(sexo == 1)
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso Ideal: %f\n",pesoIdeal);
    }
    else if (sexo == 2)
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso Ideal: %f\n",pesoIdeal);
    }

    return 0;
}
