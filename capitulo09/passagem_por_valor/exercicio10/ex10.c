/* Elabore uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará 
 * a operação que deseja efetuar com os números. Assim, se o símbolo for ˝+˝, deverá ser 
 * realizada uma adição, se for ˝/˝, uma divisão,e, se for ˝*˝, será efetuada uma multiplicação. 
 * Retorne o resultado da operação para o programa principal. */

#include <stdio.h>

float calculadora (float numero1, float numero2, char operacao){

    switch (operacao) {
        case '+':
            return numero1 + numero2;
            break;
        case '-':
            return numero1 - numero2;
            break;
        case '/':
            return numero1 / numero2;
            break;
        case '*':
            return numero1 * numero2;
            break;
    }

}

int main(int argc, const char *argv[])
{
    float numero1, numero2;
    char operacao;

    printf("Numero 1:");
    scanf("%f",&numero1);
    printf("Numero 2: ");
    scanf("%f",&numero2);
    printf("Operacao: ");
    scanf(" %c",&operacao);

    if (numero2 == 0 && operacao == '/'){
        printf("Divisao por zero\n");
        return 0;
    }
    printf("Resultado: %.4f\n",calculadora(numero1,numero2,operacao));
    return 0;
} 
