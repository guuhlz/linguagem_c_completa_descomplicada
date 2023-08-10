/*  Escreva uma função para o cálculo do volume e área de uma esfera em que π = 3.1414592. 
 *  O valor do raio r deve ser passado por parâmetro, e os
valores calculados devem ser retornados por referência. */

#include <stdio.h>
#include "math.h"


void volumeAreaEsfera(float *raio,float *volume,float *area);

int main (int argc, char *argv[])
{
    float raio = 0,volume = 0, area = 0;


    printf("Raio esfera: ");
    scanf("%f",&raio);

    volumeAreaEsfera(&raio,&volume,&area);

    printf("Volume esfera: %f\nArea esfera: %f\n",volume,area);
    return 0;
}

void volumeAreaEsfera(float *raio,float *volume,float *area){
    *volume = (4 * M_PI * pow(*raio,3))/3;
    *area = 4 * M_PI * pow(*raio,2);
}
