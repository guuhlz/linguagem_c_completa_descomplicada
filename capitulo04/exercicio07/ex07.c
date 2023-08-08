/*
7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada es-
tado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o pro-
grama retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.
Estado
 MG
 SP
 RJ
 MS
Imposto
 7%
 12%
 15%
 8%
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int estado         = 0;
    float valorProduto = 0;

    printf("Valor Produto: ");
    scanf("%f",&valorProduto);

    printf("Estado: 1-MG\t2-SP\t3-RJ\t4-MS");
    scanf("%d",&estado);

    if(estado == 1)
    {
        printf("Valor produto com imposto: %.2f",valorProduto*1.07);
    }
    else if (estado == 2)
    {
        printf("Valor produto com imposto: %.2f",valorProduto*1.12);
    }
    else if (estado == 3)
    {
        printf("Valor produto com imposto: %.2f",valorProduto*1.15);
    }
    else if (estado == 4)
    {
        printf("Valor produto com imposto: %.2f",valorProduto*1.08);
    }
    else
    {
        printf("Estado invalido!!!");
    }
    return 0;
}
