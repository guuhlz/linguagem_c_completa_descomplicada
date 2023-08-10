// 1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:

#include <stdio.h>
#include <math.h>

int cubo(int n);

int main (int argc, char *argv[])
{
    int n;
    printf("N: ");
    scanf("%d",&n);
    printf("Somatorio: %d\n",cubo(n));
    return 0;
}

int cubo(int n){
    int result=0;
    if(n == 1){
        return 1;
    }else {
        return pow(n,3) + cubo(n-1);
    }
}
