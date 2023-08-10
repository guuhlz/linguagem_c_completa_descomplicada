/*  Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo. */

#include <stdio.h>

int main (int argc, char *argv[])
{
    int a,*b,**c,***d;

    printf("X: ");
    scanf("%d",&a);

    b = &a;
    printf("X*2 = %d\n",(*b)*2);

    c = &b;
    printf("X*3 = %d\n",(**c)*3);

    d = &c;
    printf("X*4 = %d\n",(***d)*4);

    
    return 0;
}
