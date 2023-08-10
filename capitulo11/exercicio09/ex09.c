/* 9) Crie uma função que receba uma string e retorne o ponteiro para essa string in-
vertida. */

#include <stdio.h>
#include <malloc.h>

int *ptrFrase(char *frase);

int main (int argc, char *argv[])
{
    char frase[80];
    
    printf("Frase: ");
    scanf("%s",frase);


    return 0;

}

int *ptrFrase(char *frase){
    int *aux;
    int *ptr;
    int tam; 

    while(*frase != '\0'){
        tam ++;
        frase++;
    }

    for(int k=0;k<(tam/2);k++){
        *aux = *(frase + k);
        *(frase + k) = *(frase + (tam-k));
        *(frase + (tam-k)) = *aux;
    }

    *ptr = *frase;

    return ptr;

}



