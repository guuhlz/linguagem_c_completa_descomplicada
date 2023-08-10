/* Escreva uma função que receba por parametro uma temperatura em graus Fahrenheit e a retorno 
 * convertida em graua Celsius. A fórmula de conversão é C = (F - 32.0) * (5.0/9.0), sendo F a 
 * temperatura em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>

float fahrenheitParaCelsius(float temp){
    return (temp - 32.0)*(5.0/9.0);
}
int main(int argc, const char *argv[]) {
    float tempFahrenheit;

    printf("Temperatura Fahrenheit: ");
    scanf("%f",&tempFahrenheit);

    printf("%f\n",fahrenheitParaCelsius(tempFahrenheit));
    return 0;
}
