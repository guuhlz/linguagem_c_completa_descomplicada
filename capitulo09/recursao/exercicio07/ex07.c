/*  Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
e calcule e retorne o resultado de xy para o programa principal. */

#include <stdio.h>
#include <math.h>
int potencia(int x,int y);

int main (int argc, char *argv[])
{
    int x =0, y=0; 
    printf("X: ");
    scanf("%d",&x);
    printf("Y: ");
    scanf("%d",&y);

    printf("X^Y: %d\n",potencia(x,y));
    return 0;
}

int potencia(int x, int y){
    if(y == 0){
        return 1;
    }else {
        return x * potencia(x,y-1);
    }
}
