//Crie uma estrutura para representar as coordenadas de um ponto no plano ((X,Y). 
//Em seguida, declare e leia do teclado dois pontos e exiba a distancia entre eles.
#include <stdio.h>
#include <math.h>

struct coordernadas {
    int x;
    int y;
};


int main(int argc, const char *argv[])
{
    struct coordernadas ponto1,ponto2;
    float distancia;

    printf("Coordenada X1: ") ;
    scanf("%d",&ponto1.x);
    printf("Coordenada Y2: ");
    scanf("%d",&ponto1.y);
    
    printf("Coordenada X2: ") ;
    scanf("%d",&ponto2.x);
    printf("Coordenada Y2: ");
    scanf("%d",&ponto2.y);
    

    distancia = sqrt(pow((ponto2.x - ponto1.x),2) + pow((ponto2.y - ponto1.y),2));

    printf("Distancia: %f\n",distancia);
    return 0;
}
