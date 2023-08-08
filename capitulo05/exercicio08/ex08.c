/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/


#include <stdio.h> 

int main(int argc, const char *argv[])
{
    int numero = 0;
    float soma   = 0;

    for(int i =0; i<10; i++)
    {
        printf("Numero[%d]: ",i+1);
        scanf("%d",&numero);

        soma = soma + (float)numero;
    }
    printf("Media: %.2f\n",soma/10);
    return 0;

}
