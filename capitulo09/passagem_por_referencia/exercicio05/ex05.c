/* Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n
números em que m é a média desse vetor. */

#include <stdio.h>
#include <math.h>

float media(float *numeros,int *n);
float desvioPadrao(float *numeros, float *media, int *n);

int main (int argc, char *argv[])
{
    int n = 0;
    float med = 0;
    printf("Quantidade de valores Desvio Padrao: ");
    scanf("%d",&n);

    float numeros[n];

    for(int k=0;k<n;k++){
        printf("[%d] Valor: ",k+1);
        scanf("%f",&numeros[k]);
    }

    med = media(numeros,&n);

    printf("Desvio Padrao: %f\n",desvioPadrao(numeros,&med,&n));  
    return 0;
}
float media(float *numeros,int *n){
    float result;
    for(int k=0;k<*n;k++){
        result += numeros[k];
    }
    return result / *n;
}

float desvioPadrao(float *numeros,float *media,int *n){
    float result = 0;
    for(int k=0;k<*n;k++){
        result += pow((numeros[k]- *media),2);
    }
    return result = sqrt(result/(*n -1));
}
