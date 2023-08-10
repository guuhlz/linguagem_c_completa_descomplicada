/* Escreva uma função que receba um array contendo a nota de 10 alunos e retorne
a média dos alunos. */

#include <stdio.h>

float mediaNotas(float *notas);

int main (int argc, char *argv[])
{
    
    float notas[10];

    for(int k=0; k<10; k++){
        printf("[%d] Nota: ",k+1);
        scanf("%f",&notas[k]);
    }

    printf("Media notas: %f\n",mediaNotas(notas));
    return 0;
}

float mediaNotas(float *notas){
    float result;
    int count=0;
    for(int k=0;k<10;k++){
        result += notas[k];
        count++;
    }
    return result/count;
}
