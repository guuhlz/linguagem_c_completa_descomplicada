/* Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double. */

#include <stdio.h>


int main (int argc, char *argv[])
{
    printf("Tamanho char em bytes: %ld\n",sizeof(char));
    printf("Tamanho int em bytes: %ld\n",sizeof(int));
    printf("Tamanho float em bytes: %ld\n",sizeof(float));
    printf("Tamanho double em bytes: %ld\n",sizeof(double));
    return 0;
}
