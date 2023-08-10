/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorno=e 
 * o somatório de 1 ate n: 1+2+3+...n */

#include <stdio.h>

int somatorio(int n){
    int result =0;
    for (int i=1; i<(n+1); i++){
       result += i; 
    }
    return result;
}

int main(int argc, const char *argv[])
{
    int n;

    printf("Numero :");
    scanf("%d",&n);

    printf("Somatorio: %d\n",somatorio(n));
    return 0;
}
