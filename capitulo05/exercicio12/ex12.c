/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os
 * divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
 * do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero = 0;
    int soma   = 0;

    printf("Soma: ");
    scanf("%d",&numero);
    for(int i=1; i<(numero+1); i++)
    {
        if (numero % i == 0)
        {
            if(i!= numero)
            {
                soma = soma + i;
            }

        }
    }
    printf("Soma: %d\n",soma);
    return 0;
}
