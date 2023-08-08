/*19) Faça um programa que calcule e escreva o valor de S:*/


#include<stdio.h>


int main(int argc, const char *argv[])
{
    float resultado = 0.0;
    for(int i =1; i<56; i++)
    {
        printf("%d/%d\n",2*i-1,i);
        resultado = resultado + (i+(i-1))/1;
        
    }
    printf("%f\n",resultado);
    return 0;
}
