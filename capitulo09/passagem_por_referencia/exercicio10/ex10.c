/* Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc. */

#include <stdio.h>
#include <string.h>

int palindromo(char *palavra);


int main (int argc, char *argv[])
{
    char palavra[30];
    int teste = 0;

    printf("Palavra: ");
    scanf("%s",palavra);

    if(palindromo(palavra)){
        printf("E palindromo\n");
    }else {
        printf("Nao e palindromo ou erro\n");
    }
    return 0;
}

int palindromo(char *palavra){
    int tam = 0;
    int cont = 0;
    while(palavra[tam] != '\0'){
        tam++;
    }
    printf("%d %d\n",tam, tam/2);

    for(int k = 0; k<(tam/2); k++){
        if (palavra[k] == palavra[tam-k-1]) cont++;
    }

    if (cont == tam/2) return 1;
    return 0;
}
