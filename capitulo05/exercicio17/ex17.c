/*Escreva um programa que leia um número inteiro positivo N e em seguida impri-
 * ma N linhas do chamado tri0ngulo de Floyd:*/

#include<stdio.h>


int main(int argc, const char *argv[])
{
    int numero = 0;
    int cont = 1;
    printf("Numero: ");
    scanf("%d",&numero);
    for(int i = 1; i<numero+1; i++)
    {
    
        for(int j =1; j<i+1;j++)
        {
            printf("%d ",cont);
            cont = cont +1;
        }
        printf("\n");
    }

    return 0;
}
