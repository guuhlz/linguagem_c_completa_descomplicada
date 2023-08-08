/*
15) Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Numero inteiro: ");
    scanf("%d",&numero);

    printf("Numero invertido %d\n", ((numero%10)*100 + (numero/10%10)*10 + (numero/10/10%10)*1));

    return 0;
}
