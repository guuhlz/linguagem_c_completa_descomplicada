/*
8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float temperaturaCelsius    = 0.0;
    float temperaturaFahrenheit = 0.0;
    
    printf("Temperatura Celsius: ");
    scanf("%f",&temperaturaCelsius);

    temperaturaFahrenheit = temperaturaCelsius * (9.0/5.0) + 32;

    printf("Temperatura Fahrenheit: %f\n",temperaturaFahrenheit);
    return 0;
}
