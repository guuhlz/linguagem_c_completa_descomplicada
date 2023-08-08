/*
3) Escreva um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Digite um número inteiro:");    
    scanf("%d",&numero);
    printf("Valor lido: %d\n",numero);
    return 0;   
}
