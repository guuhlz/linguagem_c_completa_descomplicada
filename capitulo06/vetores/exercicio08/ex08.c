/*8) Faça um programa que preencha um vetor com 10 números reais. Em seguida,
 * calcule e mostre na tela a quantidade de números negativos e a soma dos números
 * positivos desse vetor.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero[10];
    int negativos = 0;
    int soma      = 0;

    for(int k=0;k<10;k++)
    {
        printf("Numero[%d]: ",k+1);
        scanf("%d",&numero[k]);

        if(numero[k] < 0) negativos += 1;
        if(numero[k] > 0) soma += numero[k]; 
    }
    printf("Negativos: %d\n",negativos);
    printf("Soma: %d\n",soma);
    return 0;
}
