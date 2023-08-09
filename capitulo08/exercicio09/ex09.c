/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, 
 * seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. 
 * Calcule e exiba os domes do atleta mais alto e do mais velho. */

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
    int alturaMaior = 0;
    float idadeMaior = 0;

    int indiceAltura;
    int indiceIdade;

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

        if (dadosAtleta[i].altura >= alturaMaior){
            alturaMaior = dadosAtleta[i].altura;
            indiceAltura = i;
        }
        if (dadosAtleta[i].idade >= idadeMaior){
            idadeMaior = dadosAtleta[i].idade;
            indiceIdade= i;
        }
        
    }
    printf("Maior altura : %s",dadosAtleta[indiceAltura].nome);
    printf("Maior idade: %s",dadosAtleta[indiceIdade].nome);
    return 0;
}
