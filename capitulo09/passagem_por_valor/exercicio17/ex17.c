/* Faça uma função que receba um inteiro N como parametro. Calcule e 
 * retorne o resultado da seguinte série S: S = (2/4) + (5/5) + (10/6) +...+ (N²+1\N+3) */

#include <stdio.h>

float serie (int n){
    float result=0;

    for(int i=1; i<(n+1); i++){
        result += (float)((i*i)+1)/(i+3);
        printf("%f\n",result);
    }
    return result;

}

int main(int argc, const char *argv[])
{
    int n;

    printf("Numero: ");
    scanf("%d",&n);

    printf("Serie: %f\n",serie(n));
    return 0;
}
