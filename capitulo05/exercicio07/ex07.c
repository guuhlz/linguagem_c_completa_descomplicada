/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
 * valores e apresente o resultado na tela.
*/


#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero     = 0;
    int acumulador = 0;


    for (int i = 0; i<10; i++)
    {
        printf("Numero[%d]: ",i+1);
        scanf("%d",&numero);
        
        acumulador = acumulador + numero;
    }
    printf("Soma numeros: %d\n",acumulador);
    return 0;
}
