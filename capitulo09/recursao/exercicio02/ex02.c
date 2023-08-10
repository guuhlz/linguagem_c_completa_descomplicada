/* 2) Crie uma função recursiva que receba um número inteiro N e retorne o somatório
dos números de 1 a N. */

#include <stdio.h>

int somatorio(int n);


int main (int argc, char *argv[])
{
    int n;
    printf("N: ");
    scanf("%d",&n);
    printf("Somatorio 1 ate %d: %d\n",n,somatorio(n));
    return 0;
}

int somatorio(int n){
    if(n == 1){
        return 1;
    }else{
        return n + somatorio(n-1);
    }
}

