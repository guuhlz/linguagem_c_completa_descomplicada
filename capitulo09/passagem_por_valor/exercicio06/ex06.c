/* Escreva uma função que receba o peso (KG) e a altura (m) de uma pessoa. 
 * Calcule e retorne o IMC dessa pessoa: IMC = peso/(altura^2) . */

#include <stdio.h>
#include <math.h>

float IMC (float altura, float peso){
    return peso / (pow(altura,2));
}

int main(int argc, const char *argv[])
{
    float altura, peso;

    printf("Altura: ");
    scanf("%f",&altura);
    printf("Peso: ");
    scanf("%f",&peso);

    printf("IMC: %f\n",IMC(altura,peso));
    return 0;
}
