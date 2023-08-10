/* Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183,
usando a série a seguir: eq livro. A função deve ter como parâmetro o número de termos que serão somados, N. Note
que quanto maior esse número, mais próxima do valor e estará a resposta. */

#include <stdio.h>
#include <math.h>

double neperiano(int n);
int fatorial(int num);

int main (int argc, char *argv[])
{
    int n = 0;

    printf("Numero de termos: ");
    scanf("%d",&n);

    printf("Neperiano (N=%d): %.20f\n",n,neperiano(n));
    return 0;
}

int fatorial(int num){
    int result = 1;

    for (int k=num; k>0 ; k--) {
        result *= k;
    }
    return result;
}

double neperiano(int n){
    double result = 0;

    for(int k=0; k<n; k++){
        result += (1.0/(fatorial(k)));
    }
    return result;
}

