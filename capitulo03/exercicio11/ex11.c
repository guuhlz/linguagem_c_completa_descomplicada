/*
11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
dente. A área do círculo é A = π * raio2, sendo π = 3.141592.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raioCirculo = 0.0;
    float areaCirculo = 0.0;

    printf("Raio Circulo: ");
    scanf("%f",&raioCirculo);

    areaCirculo = M_PI * (pow(raioCirculo,2.0));

    printf("Area Circulo: %f\n",areaCirculo); 
    return 0;
}
