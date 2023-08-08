/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
 * prima sua média.*/


#include <stdio.h> 

int main(int argc, const char *argv[])
{
    int numero   = 0;
    float soma   = 0;
    int contador = 0;

    for(int i =0; i<10; i++)
    {
        printf("Numero[%d]: ",i+1);
        scanf("%d",&numero);
        if (numero >=0)
        {
            //contador = contador +1;
            soma = soma + numero;
        }
    }
    printf("Media: %.2f\n",soma/10);
    return 0;

}
