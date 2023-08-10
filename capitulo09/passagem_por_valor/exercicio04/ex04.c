/* Escreva uma função que receba por parametro a altura e o raio de um cilindro circular e rotorne 
 * o volume desse cilindro. O Volume de um cilindro circular é calculado por meio da seguinte 
 * fórmula: V = pi*raio²*altura, em que pi = 3.1414592 */

#include <stdio.h>
#include <math.h>

float volumeCilindro (float altura, float raio){
    return M_PI*(pow(raio,2))*altura; 
}

int main(int argc, const char *argv[])
{
    float raio, altura;

    printf("Raio cilindo: ");
    scanf("%f",&raio);   
    printf("Altura cilindro: ");
    scanf("%f",&altura);

    printf("Volume cilindro: %f\n",volumeCilindro(altura,raio));
    return 0;
}
