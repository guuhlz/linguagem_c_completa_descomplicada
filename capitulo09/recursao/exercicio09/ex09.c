/* Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e
retorne o seu fatorial n! */

#include <stdio.h>

int recursao(int x);

int main (int argc, char *argv[])
{
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);

    printf("%d! = %d\n",numero,recursao(numero));
    return 0;
}

int recursao(int x){
    if (x == 1 ){
        return 1 ;
    }else {
        int result = recursao(x-1);
        return x*result;
    }
}
