/*
4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
•• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
•• Caso contrário, imprima: “Empréstimo concedido.”
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario   = 0.0;
    float prestacao = 0.0;

    printf("Salario :");
    scanf("%f",&salario);
    printf("Prestacao emprestimo: ");
    scanf("%f",&prestacao);

    if (prestacao < (salario*0.2))
    {
        printf("Emprestimo concedido");
    }
    else
    {
        printf("Emprestimo não concedido");
    }
    return 0;
}
