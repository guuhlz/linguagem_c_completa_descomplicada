/* Elabore uma função que receba por parâmetros os coeficientes de uma equação do
s gundo grau. Em seguida, calcule e mostre as raízes dessa equação. */

#include <stdio.h>
#include <math.h>

int raizes(float *a,float *b,float *c,float *r1,float *r2);



int main (int argc, char *argv[])
{
    float a,b,c;
    float r1,r2;
    printf("Coeficiente a: ");
    scanf("%f",&a);
    printf("Coeficiente b: ");
    scanf("%f",&b);
    printf("Coeficiente c: ");
    scanf("%f",&c);

    int r = raizes(&a,&b,&c,&r1,&r2);
    if (r == -1){
        printf("Nao e equacao de segundo grau\n");
    }

    return 0;
}


int raizes(float *a,float *b,float *c,float *r1,float *r2){
    if (*a == 0){
        return -1;
    }
    float delta;

    delta = pow(*b,2) - 4 * (*a) * (*c);

    if (delta < 0){
        printf("Raizes complexas");
    }else if (delta == 0){
        *r1 = (-(*b) + sqrt(delta)) / (2 * (*a));
        printf("R1: %f",*r1);
    }else {
        *r1 = (-(*b) + sqrt(delta)) / (2 * (*a));
        *r2 = (-(*b) - sqrt(delta)) / (2 * (*a));
        printf("R1: %f\nR2: %f\n",*r1,*r2);
    }
}

