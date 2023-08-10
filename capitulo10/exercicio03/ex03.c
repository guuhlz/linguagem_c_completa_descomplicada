/* 3) Crie um programa que contenha um array de float contendo 10 elementos. Im-
 * prima o endereço de cada posição desse array. */


#include <stdio.h>


int main(int argc, const char *argv[])
{
    float numeros[10];

    
    for(int k=0; k<10; k++) printf("%d %p\n",k+1,&numeros[k]);
    return 0;
}
