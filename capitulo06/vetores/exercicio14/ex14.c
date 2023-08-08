/*14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m 
 * é a média desse vetor. 
 * Considere n = 10. O vetor v deve ser lido do teclado. */


#include <stdio.h>
#include <math.h>


int main(int argc, const char *argv[])
{
    float numeros[10];
    float desvioPadrao = 0.0;
    float media = 0.0;
    for(int k=0; k<10;k++)
    {
        printf("[%d]Numero: ",k+1);
        scanf("%f",&numeros[k]);

        media += numeros[k];
    }
    media = media/10.0f;
    for(int k=0;k<10;k++)
    {
        desvioPadrao += pow((numeros[k] - media),2);
    }

        desvioPadrao = sqrt(desvioPadrao/9.0f);

    printf("Desvio padrao: %f\n",desvioPadrao);
    
    return 0;
}
