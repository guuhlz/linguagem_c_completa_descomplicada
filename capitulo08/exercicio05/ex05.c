/* Usado a estrutura Retangulo do exercício anterior, faca um programa que declare e leia uma 
 * estrutura Retangulo e um Ponto, e informe se esse ponto está ou não dentro do retangulo  */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
struct ponto {
    float X;
    float Y;
};
struct retangulo {
    struct ponto pontoSuperiorEsquerdo;
    struct ponto pontoInferiorDireito;
};

int main(int argc, const char *argv[])
{
    struct retangulo rect;
    struct ponto point;
    float altura,base;
    bool condicao;
    
    printf("X e Y - Superior Esquerdo :");
    scanf("%f %f",&rect.pontoSuperiorEsquerdo.X,&rect.pontoSuperiorEsquerdo.Y);
    printf("X e Y - Inferior Direito:");
    scanf("%f %f",&rect.pontoInferiorDireito.X,&rect.pontoInferiorDireito.Y);

    printf("Ponto X e Y: ");
    scanf("%f %f",&point.X,&point.Y);
        
    base = rect.pontoInferiorDireito.X - rect.pontoSuperiorEsquerdo.Y;
    altura = rect.pontoSuperiorEsquerdo.Y - rect.pontoInferiorDireito.Y;
    
    condicao = (point.X <=rect.pontoInferiorDireito.X && point.X >= rect.pontoSuperiorEsquerdo.X) && (point.Y >= rect.pontoInferiorDireito.Y && point.Y <= rect.pontoSuperiorEsquerdo.Y);
    if (condicao)
    {
        printf("Ponto dentro do retangulo\n");
    }else
    {
        printf("Ponto fora do retangulo\n");
    }
    return 0;
}
