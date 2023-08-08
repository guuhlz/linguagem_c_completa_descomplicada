/*
4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float numero1,numero2,numero3,numero4,media;

    printf("Numero 1: ");
    scanf("%f",&numero1);
    printf("Numero 2: ");
    scanf("%f",&numero2);
    printf("Numero 3: ");
    scanf("%f",&numero3);
    printf("Numero 4: ");
    scanf("%f",&numero4);

    media = (numero1+numero2+numero3+numero4)/4; 

    printf("Media: %.2f\n",media);
    return 0;
}

