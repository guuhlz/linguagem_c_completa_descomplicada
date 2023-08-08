/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include<stdio.h>


int main(int argc, const char *argv[])
{
    int acumulador = 0;
    int teste      = 0;
    for (int i =0; i<200; i++)
    {
        if(i%2 == 0)
        {
            acumulador = acumulador + i;
            teste = teste +1;
        }
        if(teste >= 50) break;
    }
    printf("%d\n%d\n",acumulador,teste);    
    return 0;
}
