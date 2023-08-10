/* Elabora uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito 
 * é um número inteiro não negativo que pode ser expresso como o quadrado de 
 * outro número inteiro. */
#include <stdio.h>
#include <math.h>

int quadradroPerfeito (int numero){
    int raizInteira = sqrt(numero);
    if (((numero / (sqrt(numero))) == sqrt(numero)) && (sqrt(numero) == raizInteira)) return 1; else return 0;
}
int main(int argc, const char *argv[])
{
    int num;

    printf("Numero: ");
    scanf("%d",&num);

    if (quadradroPerfeito(num)) printf("Quadradro perfeito\n"); else printf("Não é quadrado perfeito\n");
    return 0;
}
