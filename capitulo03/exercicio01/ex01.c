/*
1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu su-
cessor.
*/


#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero = 0;
    printf("Numero: ");
    scanf("%d",&numero);
    printf("%d %d %d",numero-1,numero,numero+1);

    return 0;
}



