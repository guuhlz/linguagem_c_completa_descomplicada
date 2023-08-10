/* Escreva uma função que receba por parametros dois valores inteiros x e y e retorne o 
 * resultado de x^y para o programa principal. Não use nenhuma função pronta para isso. */

#include <stdio.h>

int potencia (int x, int y){
    int resultado = x;
    if (y == 0) return 1;
    for (int i=1; i<(y); i++){
        resultado *= x;
    }
    return resultado;
}

int main(int argc, const char *argv[])
{
    int x,y;

    printf("Numero: ");
    scanf("%d",&x);
    printf("Expoente: ");
    scanf("%d",&y);

    printf("x^y = %d\n",potencia(x,y));
    return 0;
}
