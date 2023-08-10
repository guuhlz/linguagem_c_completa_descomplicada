/*  Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura. */

#include <stdio.h>

typedef struct{
    int matricula;
    char nome[80];
    float nota[3];
}aluno;

int main (int argc, char *argv[])
{
    aluno A;

    printf("%ld\n",sizeof(A));
    return 0;
}
