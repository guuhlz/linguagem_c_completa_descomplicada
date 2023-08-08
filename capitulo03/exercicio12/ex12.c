/*
12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio2 * altura,em que π = 3.141592.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raioCilindro   = 0.0;
    float alturaCilindro = 0.0;
    float volumeCilindo  = 0.0;

    printf("Raio Cilindro: ");
    scanf("%f",&raioCilindro);

    printf("Altura Cilindro: ");
    scanf("%f",&alturaCilindro);

    volumeCilindo = M_PI * pow(raioCilindro,2) * alturaCilindro;

    printf("Volume Cilindro: %.2f\n",volumeCilindo);

    return 0;
}
