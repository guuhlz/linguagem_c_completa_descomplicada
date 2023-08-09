/*8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa, 
 * Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da 
 * pessoa mais nova e da mais velha */

#include <stdio.h>
#include <limits.h>

struct pessoa {
    char nome[80];
    int dia;
    int mes;
    int ano;
};
int main(int argc, const char *argv[]){

    struct pessoa dadosPessoa[6];
    int diaMaior = INT_MIN; 
    int mesMaior = INT_MIN;
    int anoMaior = INT_MIN;
    int diaMenor = INT_MAX;
    int mesMenor = INT_MAX;
    int anoMenor = INT_MAX;

    int indiceMaior = 0;
    int indiceMenor = 0;

    for(int i=0;i<6;i++){
        printf("[%d]Nome: ",i+1);
        setbuf(stdin,NULL);
        fgets(dadosPessoa[i].nome,sizeof(dadosPessoa[i].nome),stdin);
        printf("Dia: ");
        scanf("%d",&dadosPessoa[i].dia);
        printf("Mes: ");
        scanf("%d",&dadosPessoa[i].mes);
        printf("Ano: ");
        scanf("%d",&dadosPessoa[i].ano);

        if (diaMaior <= dadosPessoa[i].dia && mesMaior <= dadosPessoa[i].mes && anoMaior <= dadosPessoa[i].ano){
            diaMaior = dadosPessoa[i].dia;
            mesMaior = dadosPessoa[i].mes;
            anoMaior = dadosPessoa[i].ano;
            indiceMaior = i;
        } 
        if (diaMenor >= dadosPessoa[i].dia && mesMaior >= dadosPessoa[i].mes && anoMaior >= dadosPessoa[i].ano){
            diaMenor = dadosPessoa[i].dia;
            mesMenor = dadosPessoa[i].mes;
            anoMenor = dadosPessoa[i].ano;
            indiceMenor = i;
        }
    }
    printf("Maior : %s %d/%d:%d\n",dadosPessoa[indiceMaior].nome,dadosPessoa[indiceMaior].dia,dadosPessoa[indiceMaior].mes,dadosPessoa[indiceMaior].ano);
    printf("Menor : %s %d/%d/%d\n",dadosPessoa[indiceMenor].nome,dadosPessoa[indiceMenor].dia,dadosPessoa[indiceMenor].mes,dadosPessoa[indiceMenor].dia);

    
    return 0;
}
