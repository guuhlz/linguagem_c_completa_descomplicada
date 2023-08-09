// 2) Crire uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
// Em seguida, declare e leia do teclado um ponto e exiba a distancia dele até a origem das 
// coordenadas, isto é, a posição (0,0)

#include <stdio.h>
#include <math.h>

struct coordernadas {
    int x;
    int y;
};


int main(int argc, const char *argv[])
{
    struct coordernadas ponto;
    float distancia;

    printf("Coordenada X: ") ;
    scanf("%d",&ponto.x);
    printf("Coordenada Y: ");
    scanf("%d",&ponto.y);
    
    distancia = sqrt(pow((ponto.x - 0),2) + pow((ponto.y - 0),2));

    printf("Distancia (X,Y) -> (0,0): %f\n",distancia);
    return 0;
}
