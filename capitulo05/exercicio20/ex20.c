#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero = 0;
    float soma = 0.0;
    float acc    = 1.0;
    printf("Numero: ");
    scanf("%d",&numero);

    for(int i = 1; i<numero+1; i++)
    {
        for(int j = i; j>0; j --)
        {
            acc = acc * j;
        }

        soma = soma + (float)(1/acc);
        acc = 1.0;
    }
    printf("Soma :%f\n",soma);

    return 0;
}
