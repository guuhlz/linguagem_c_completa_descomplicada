/* Crie uma estrutura representando um aluno de uma disicplina. Essa estrutura deve conter o 
 * número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreve uma programa 
 * que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e 
 * as notas do aluno que possui a maior média geral dentro os cinco.  */

#include <stdio.h>

struct aluno {
    char nome[80];
    int matricula;
    float nota[3];
};

int main(int argc, const char *argv[]) {
    struct aluno alunos[5];
    float maior = 0;
    float media = 0;
    int indice  = 0; 
    for (int i=0;i<=4;i++){
        printf("[%d]Nome: ",i+1);
        setbuf(stdin,NULL);
        fgets(alunos[i].nome,80,stdin);
        printf("Matricula :");
        scanf("%d",&alunos[i].matricula);
        for(int j=0;j<=2;j++){
            printf("[%d] Nota: ",j+1);
            scanf("%f",&alunos[i].nota[j]);
        }
    }

    for(int i=0;i<=4;i++){
        for(int j=0;j<=2;j++){
            media += alunos[i].nota[j];
        }
        media = media/3;
        if (media >= maior){
            maior = media;
            indice = i;
        }
        media = 0;
    }
    printf("%s%d\n%f\n%f\n%f\n",alunos[indice].nome,alunos[indice].matricula,alunos[indice].nota[0],alunos[indice].nota[1],alunos[indice].nota[2]);

    return 0;
}
