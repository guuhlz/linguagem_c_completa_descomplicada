/* Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os dados 
 * de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo. */
#include <stdio.h>
#include <limits.h>
struct atleta {
    char nome[80];
    char esporte[80];
    int idade;
    float altura;
};

int main(int argc, const char *argv[])
{
    struct atleta dadosAtleta[5];
    struct atleta atletaTemp;


    for(int i=0;i<5;i++){

        printf("[%d] Nome: ",i+1);
        setbuf(stdin,NULL);
        fgets(dadosAtleta[i].nome,sizeof(dadosAtleta[i].nome),stdin);
        printf("Esporte :");
        setbuf(stdin,NULL);
        fgets(dadosAtleta[i].esporte,sizeof(dadosAtleta[i].nome),stdin);
        printf("Idade : ");
        scanf("%d",&dadosAtleta[i].idade);
        printf("Altura: ");
        scanf("%f",&dadosAtleta[i].altura);        
    }

    for (int i=0;i<4;i++){

        for (int j=i+1;j<5;j++){

            if (dadosAtleta[i].idade <= dadosAtleta[j].idade){

            atletaTemp       = dadosAtleta[i];
            dadosAtleta[i]   = dadosAtleta[j];
            dadosAtleta[j] = atletaTemp;

            }
        }
    }
    for (int i=0;i<5;i++) printf("%s\t%s\t%d\t%f\n",dadosAtleta[i].nome,dadosAtleta[i].esporte,dadosAtleta[i].idade,dadosAtleta[i].altura);
    return 0;
}
