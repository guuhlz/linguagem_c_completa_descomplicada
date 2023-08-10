// Escreva uma função que receba um array de 10 elementos e retorne a sua soma.

#include <stdio.h>

float somaArray (float *numeros);

int main (int argc, char *argv[])
{
    float numeros[10];

    for(int k=0; k<10; k++){
        printf("[%d] Numero: ",k+1);
        scanf("%f",&numeros[k]);
    }

    printf("Soma Array: %f\n",somaArray(numeros));

    return 0;

}

float somaArray(float *numeros){
    float result = 0;

    for(int k=0; k<10; k++){
        result += numeros[k];
    }
    return result;
}
