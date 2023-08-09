// Crie uma estrutura chamad Reatangulo. Essa estrutura deverá conter o ponto superior esquedo e 
// o ponto inferior direito do retangulo. Cada ponto é definido por uma estrutura Ponto, a qual 
// contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retangulo e 
// exiba a área e o comprimento da diagonal e o perímetro desse retangulo.
//

#include <stdio.h>
#include <math.h>
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
    float base,altura,area,diagonal, perimeto;
    
    printf("X e Y - Superior Esquerdo :");
    scanf("%f %f",&rect.pontoSuperiorEsquerdo.X,&rect.pontoSuperiorEsquerdo.Y);
    printf("X e Y - Inferior Direito:");
    scanf("%f %f",&rect.pontoInferiorDireito.X,&rect.pontoInferiorDireito.Y);
        
    base = rect.pontoInferiorDireito.X - rect.pontoSuperiorEsquerdo.Y;
    altura = rect.pontoSuperiorEsquerdo.Y - rect.pontoInferiorDireito.Y;
    
    area = base * altura;
    diagonal = sqrt(pow(base,2) + pow(altura,2));
    perimeto = 2*base + 2*altura;
    
    printf("Area : %f\nDiagonal: %f\nPerimetro: %f\n",area,diagonal,perimeto);
    return 0;
}
