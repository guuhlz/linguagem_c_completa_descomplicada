/* Escreva um função que receba um número inteiro positivo n. Calcule e retorno seu fatorial n! */
# include <stdio.h>
int fatorial(int n){
    int result=1;
        for (int i=1; i<(n+1);i++){
            result *= i;
        }
    return result;
}
 int main(int argc, const char *argv[])
 {
     int n;

     printf("Numero: ");
     scanf("%d",&n);

     printf("Fatorial: %d\n",fatorial(n));
     return 0;
 }
