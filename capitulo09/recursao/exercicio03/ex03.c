/*  Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem crescente. */

#include <stdio.h>

void imprime(int n);

int main (int argc, char *argv[])
{
    int n =0;
    printf("N: ");
    scanf("%d",&n);
    imprime(n);
    return 0;
}

void imprime(int n){
    if(n == 0){
        printf("%d\n",n);
    }else {
        imprime(n-1);
        printf("%d\n",n);
    }
}
