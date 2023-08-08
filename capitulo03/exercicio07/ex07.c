/*
7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorReal       = 0;
    float cotacaoDolar    = 0;
    float valorConvertido = 0;

    printf("Valor Real: ");
    scanf("%f",&valorReal);
    printf("Cotacao Dolar: ");
    scanf("%f",&cotacaoDolar);

    valorConvertido = valorReal * cotacaoDolar;

    printf("Valor Convertido: %.2f\n",valorConvertido);
    return 0;
}
