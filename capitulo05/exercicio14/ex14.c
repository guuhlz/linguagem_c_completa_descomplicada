/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuá-
 * rio. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
 * no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
 * dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
 * 13, 21, 34.*/


#include <stdio.h>

int main(int argc, const char *argv[])
{
    int enesimoTermo = 0;
    int contador = 0;
    int numero1  = 0;
    int numero2 =  0;
    int saida   =  0;
    printf("Enesimo Termo: ");
    scanf("%d",&enesimoTermo);

    for(int i =0; i<enesimoTermo; i++)
    {
        if (i == 0) numero1 = 0;
        if (i == 1) numero2 = 1;
        if(i < 2)
        {
            printf("%d\n",i);
            saida = numero1 + numero2;
        }
        if(i >=2)
        {
            printf("%d\n",saida);

        }
            
    }

    //n0 = 0
    //n1 = 1
    //n2 = 1 ; n2 =(n-2 + n-1) = 0 + 1
    //n3 = 2 ; n3 =(n-2 + n-1) = 1 + 1
    
    // 0  num1=0
    // 1  num2=1
    // 2 saida = num1+num2 = 1
    return 0;
}
