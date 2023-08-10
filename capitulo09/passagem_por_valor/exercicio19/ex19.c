/* Faça uma função que receba como parâmetro o valor de um ângulo em graus e
calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor: */
#include <stdio.h>
#include <math.h>

float taylor(float angulo);
int fatorial(int num);

int main (int argc, char *argv[])
{
    float angulo = 0.f;
    float r;
    printf("Angulo em graus: ");
    scanf("%f",&angulo);
    r = taylor(angulo*(M_PI/180));
    printf("Cos(%f): %f\n",angulo,r);
    
    return 0;
}

float taylor(float angulo){
    float result;

    for (int k = 0; k < 5; k++){
    
        result += (pow(-1,k)) / (fatorial(2*k)) * (pow(angulo,2*k));
    }
    return result;
}

int fatorial (int num){
    int result = 1;
    for(int i = num; i > 0; i --){
        result *= i;
    }
    return result;
}
