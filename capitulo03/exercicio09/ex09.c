/*
9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.
*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float anguloGraus = 0.0;
    float anguloRad   = 0.0;

    printf("Angulo Graus: ");
    scanf("%f",&anguloGraus);

    anguloRad = anguloGraus * M_PI / 180;

    printf("Angulo Radianos: %f\n",anguloRad);
    return 0;
}
