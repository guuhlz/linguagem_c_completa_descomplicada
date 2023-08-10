/* 4) Crie um programa que contenha uma matriz de float contendo três linhas e três
 * colunas. Imprima o endereço de cada posição dessa matriz. */


#include <stdio.h>


int main(int argc, const char *argv[])
{
    float matriz[3][3];

    for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            printf("[%d] [%d] %p\n",k+1,l+1,&matriz[k][l]);
        }
    }
    return 0;
}
