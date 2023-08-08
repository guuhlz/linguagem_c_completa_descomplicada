/*15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os ele-
 * mentos desse vetor e imprima o vetor na tela.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    float numero[10];
    float aux;

    for(int k=0; k<10;k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%f",&numero[k]);
    }

    for(int k=0;k<10;k++)
    {
        for(int l=0; l<10;l++)
        {
           if(numero[k] > numero[l])
           {
               aux = numero[k];
               numero[k] = numero[l];
               numero[l] = aux;
           } 
        }
    }
    for(int k =0;k<10;k++)
    {
        printf("[%d] Numero: %f\n",k+1,numero[k]);
    }
    return 0;
}
