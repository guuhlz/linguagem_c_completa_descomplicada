/*21) Escreva um programa que leia certa quantidade de números, imprima o maior
 * deles e quantas vezes o maior número foi lido. A quantidade de números a serem
 * lidos deve ser fornecida pelo usuário.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero = 0;
    int maior  = 0;
    int quant  = 0;
    int cont   = 0;

    printf("Quantidade de numeros:");
    scanf("%d",&quant);

    for (int i =0; i<quant; i++)
    {
        printf("[%d] Numero: ",i+1);
        scanf("%d",&numero);

        if(numero >= maior) maior = numero;
        if(maior == numero) cont ++;

    }
    if(cont == 0) cont =1;
    printf("Maior :%d\n Quantidade:%d\n",maior,cont);
    return 0;
}
