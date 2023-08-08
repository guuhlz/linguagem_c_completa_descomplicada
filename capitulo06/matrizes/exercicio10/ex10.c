/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3. */

#include <stdio.h>


int main(int argc, char const *argv[])
{
    float matrixNotas[10][3];
    int piorNotaProva1 = 0;
    int piorNotaProva2 = 0;
    int piorNotaProva3 = 0;


    for(int k=0; k<10; k++) 
    {
        for(int l=0; l<3; l++)
        {
            printf("Nota Aluno [%d] Prova[%d]: ", k+1, l+1);
            scanf("%f",&matrixNotas[k][l]);
            
        }
    }
    
    for(int k=0; k<10; k++) 

    {
        for(int l=0; l<3; l++)
        {
            printf("[%f] ",matrixNotas[k][l]);
            
        }
        printf("\n");
    }


    for(int k=0; k<10; k++)
    {
        if(matrixNotas[k][0] <= matrixNotas[k][1] && matrixNotas[k][0] <= matrixNotas[k][2]) piorNotaProva1 += 1;
        if(matrixNotas[k][1] <= matrixNotas[k][0] && matrixNotas[k][1] <= matrixNotas[k][2]) piorNotaProva2 += 1;
        if(matrixNotas[k][2] <= matrixNotas[k][0] && matrixNotas[k][2] <= matrixNotas[k][1]) piorNotaProva3 += 1;
    }

    printf("Quantidade pior nota P1: [%d]\n",piorNotaProva1); 
    printf("Quantidade pior nota P2: [%d]\n",piorNotaProva2);
    printf("Quantidade pior nota P3: [%d]\n",piorNotaProva3);
    return 0;
}
