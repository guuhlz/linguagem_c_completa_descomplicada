//  Escreva uma função que, dado um número real passado como parâmetro, retorne
// a parte inteira e a parte fracionária desse número por referência.

#include <stdio.h>

void separarRealFracionaria (float numero, int *real, float *fracionaria);
int main (int argc, char *argv[])
{
    float numero = 0;
    int real;
    float fracionaria;

    printf("Numero: ");
    scanf("%f",&numero);

    separarRealFracionaria(numero,&real,&fracionaria);

    printf("%f\t%d\t%f\n",numero,real,fracionaria);
    return 0;
}

void separarRealFracionaria (float numero, int *real, float *fracionaria){
    *real = (int)numero;
    *fracionaria = numero - *real;
}



  
