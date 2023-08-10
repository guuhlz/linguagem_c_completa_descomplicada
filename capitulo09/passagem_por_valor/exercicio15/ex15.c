/*Elabore um função que receba como parametro um valor inteiro n 
 * e gere como saída n linhas com pontos de exclamação. */

#include <stdio.h>

void exclamacao (int n){
    for(int i=1;i<(n+1);i++){
        for(int j=1;j<(i+1);j++){
            printf("!");
        }
        printf("\n");
    }
}

int main(int argc, const char *argv[])
{
    int n;

    printf("Numero: ");
    scanf("%d",&n);

    exclamacao(n);
    return 0;
}
