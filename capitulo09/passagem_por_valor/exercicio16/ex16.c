/* Elabore um função que receba como parametro um valor inteiro n egere como saída um 
 * triangulo lateral formado por asterisco conforme o exemplo a seguir, em que usamos n=4. */

#include <stdio.h>

void triangulo (int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=(n-1);i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(int argc, const char *argv[])
{
    int n;

    printf("Numero: ");
    scanf("%d",&n);

    triangulo(n);
    return 0;
}
