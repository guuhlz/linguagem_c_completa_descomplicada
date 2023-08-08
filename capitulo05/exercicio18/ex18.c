/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
 * número fornecido é primo ou não.*/


#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero = 0;
    int cont   = 0; 
    printf("Numero: ");
    scanf("%d",&numero);

    for(int i =1; i<numero+1 ; i++)
    {
        if(numero % i == 0) cont = cont +1;
    }         
    if(cont == 2)
    {
        printf("Primo\n");
    } 
    else
    {
        printf("Não primo");
    } 
    return 0;
}
