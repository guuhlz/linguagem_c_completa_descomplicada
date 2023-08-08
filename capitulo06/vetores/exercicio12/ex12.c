/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
 * iguais e os escreva na tela.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero[10];

    for(int k=0;k<10;k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);
    }

    for(int k=0;k<10;k++)
    {
        for(int l=k+1; l<10; l++)
        {
            if(numero[k] == numero[l]) printf("%d\n",numero[k]);
        }
    }
}
