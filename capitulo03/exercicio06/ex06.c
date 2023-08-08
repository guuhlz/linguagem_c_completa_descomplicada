/*
6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a veloci-
dade em km/h e M em m/s.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float velocidadeKMH = 0;
    float velocidadeMS  = 0;

    printf("Velocidade em km/h: ");
    scanf("%f",&velocidadeKMH);

    velocidadeMS = velocidadeKMH * (10.0/36.0);

    printf("Velocidade m/s: %f\n",velocidadeMS);
    return 0;
}
