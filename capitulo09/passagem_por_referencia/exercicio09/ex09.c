/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
Essa função deve retornar o índice do aluno que possui a maior média geral entre
todos os alunos. */

#include <stdio.h>
#include <limits.h>

struct aluno {
    char nome[20];
    int matricula;
    float nota[3];
    float media;
    
};

int indiceAluno(struct aluno *alunos,int n);


int main (int argc, char *argv[])
{
    int n,indice;
    printf("Quantidade de alunos: ");
    scanf("%d",&n);

    struct aluno alunos[n];

    indice = indiceAluno(alunos,n);
    printf("Maior media\n Nome: %s\nMatricula: %d\nMedia: %f\n",alunos[indice].nome,alunos[indice].matricula,alunos[indice].media);
    return 0;
}

int indiceAluno(struct aluno *alunos,int n){
    int maiorMedia = INT_MIN;
    int indice = 0;

    for(int k=0; k<n; k++){
        alunos[k].media = 0;
        printf("[%d] Nome: ",k+1);
        // gets(alunos[k].nome);
        scanf("%s",alunos[k].nome);
        printf("[%d] Matricula: ",k+1);
        scanf("%d",&alunos[k].matricula);
        for(int l =0; l<3; l++){
            printf("[%d] Nota:",l+1);
            scanf("%f",&alunos[k].nota[l]);
            alunos[k].media += alunos[k].nota[l];
        }
        alunos[k].media = alunos[k].media/3;
        if (alunos[k].media >= maiorMedia){
            maiorMedia = alunos[k].media;
            indice = k;
        }
    }
    return indice;
    
}
