/* Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122. */

#include <stdio.h>

void maiuscula(char *palavra);

int main (int argc, char *argv[])
{
    char palavra[20];
    printf("Palavra: ");
    scanf("%s",palavra);
    maiuscula(palavra);
    return 0;
}    

void maiuscula(char *palavra){
    int ind = 0;
    while(palavra[ind] != '\0'){
        printf("%c",palavra[ind]-32);
        ind++;
    }
    printf("\n");
}

