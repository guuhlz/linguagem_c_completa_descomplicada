/* Escreva uma função qe receba por parametro dois números e retorno o maior deles.*/

#include <stdio.h>



int maiorNumero (int numero1, int numero2){
    if (numero1 >= numero2) return numero1; else return numero2;
}

int main(int argc, const char *argv[])
{
    int numero1,numero2;

    printf("Numero 1: ");
    scanf("%d",&numero1);
    printf("Numero 2: ");
    scanf("%d",&numero2);

    printf("Maior numero: %d\n",maiorNumero(numero1,numero2));

    return 0;
}
