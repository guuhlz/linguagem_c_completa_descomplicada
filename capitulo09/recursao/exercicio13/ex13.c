/*  Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parâmetro para a mesma: */

#include <stdio.h>

float serie(int n);

int main (int argc, char *argv[])
{
    int n;
    printf("N: ");
    scanf("%d",&n);

    printf("Serie: %f\n",serie(n));
    return 0;
}

float serie(int n){
    int result = 0;
    if(n == 1){
        return 2;
    }else{
        return (float)(1+(n*n))/n + serie(n-1);
    }

}
