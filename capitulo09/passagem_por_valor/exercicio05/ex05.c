/* Escreva uma função para o cálculo do volume de um esfera V=4/(3*pi) * r^3, 
 * o balor do raio deve ser passado por parametro.   */

#include <stdio.h>
#include <math.h>

float volumeEsfera (float raio){
    return (4*M_PI*pow(raio,3))/3;
}

int main(int argc, const char *argv[])
{
    float raioEsfera;
    
    printf("Raio Esfera: ");
    scanf("%f",&raioEsfera);

    printf("Volume esfera :%f\n",volumeEsfera(raioEsfera));    
    return 0;
}
