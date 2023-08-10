/* Escreva uma função recursiva que receba um número inteiro, maior ou igual a
zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. */

#include <stdio.h>

int fibonacci(int x);

int main (int argc, char *argv[])
{
    int x;
    printf("Enesito termo Fibonacci: ");
    scanf("%d",&x);

    printf("%d\n",fibonacci(x));
    return 0;
}

int fibonacci(int x){
    if (x == 0){
        return 0;
    }else if(x == 1) {
        return 1;
    }else{
        int y = fibonacci(x-2) + fibonacci(x-1);
        return y; 
    }
}
