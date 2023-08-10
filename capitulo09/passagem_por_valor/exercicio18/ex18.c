/* Faça uma função que receba como par0metro o valor de um 0ngulo em graus e
 * calcule o valor do seno desse 0ngulo usando a sua respectiva série de Taylor: */

#include <stdio.h>
#include <math.h>

float taylor (float);
int fatorial(int);

int main()
{
    float angulo = 0.f;
    float r;
    printf("Angulo em graus: ");
    scanf("%f",&angulo);
    r = taylor(angulo*(M_PI/180));
    printf("Sen(%f): %f\n",angulo,r);

    return 0;
}

float taylor (float angulo){
    float resultado = 0.f;
    float num, dem;

    for(int k=0; k<5; k++){
        num = pow((-1),k);
        dem = fatorial(2*k + 1);

        resultado += (float)(num/dem) * (pow(angulo,(2*k + 1)));
    }

    return resultado;
}

int fatorial (int num){
    int result = 1;
    for(int i = num; i > 0; i --){
        result *= i;
    }
    return result;
}
