/* Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamica-
mente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor
dentro da função. */

#include <stdio.h>
#include <malloc.h>

void preencheCadastro(int n);

typedef struct {
    char nome[80];
    int idade;
    char endereco[80];
}Cadastro;

int main (int argc, char *argv[])
{
    int n;
    printf("Quantidade cadastros: ");
    scanf("%d",&n);
    preencheCadastro(n); 
    return 0;
}

void preencheCadastro(int n){
    Cadastro *c = (Cadastro*) malloc(n*sizeof(Cadastro));
    
    for(int k=0; k<n; k++){
        printf("[%d]Nome: ",k+1);
        scanf("%s",c[k].nome);
        printf("[%d]Idade: ",k+1);
        scanf("%d",&c[k].idade);
        printf("[%d]Endereco: ",k+1);
        scanf("%s",c[k].endereco);

    }

    free(c);
}
