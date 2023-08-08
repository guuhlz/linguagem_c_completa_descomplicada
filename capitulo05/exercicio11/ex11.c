/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem-
 * plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero = 0;

    printf("Numero: ");
    scanf("%d",&numero);

    for(int i =1; i<numero+1; i++)
    {
        if((numero % i) == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
