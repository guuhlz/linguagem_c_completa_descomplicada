/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digi-
te um número negativo. O programa tem de retornar o maior e o menor número
lido.*/


#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero = 0;
    int maior  = 0;
    int menor  = 0;
    int cont   = 0;
    

    do
    {
        printf("Numero : ");
        scanf("%d",&numero);
        if(cont == 0)
        {
            menor = numero;
            cont = 1;
        }
        if(numero > maior && numero>=0) maior = numero;
        if(numero < menor && numero>=0) menor = numero;

    }while(numero>=0);

    printf("Maior :%d\nMenor: %d\n",maior,menor);
    return 0;
}
