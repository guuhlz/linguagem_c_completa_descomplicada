/*
14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char letra = '\0';

    printf("Letra minuscula: ");
    //getc(letra);
    scanf("%c",&letra);

    printf("Letra maiuscula %c\n", letra-32);

    return 0;

}
