/* Em matemática, o número harmônico designado por Hn define-se como o enési-
mo termo da série harmônica. */

#include <stdio.h>

float serieHarmonica(int n);

int main (int argc, char *argv[])
{
    int n;
    printf("Enesimo termo serie harmonica: ");
    scanf("%d",&n);

    printf("%f",serieHarmonica(n));
    return 0;
}

float serieHarmonica(int n){
    if(n==1){
        return 1;
    }else {
        return (float)1/n + serieHarmonica(n-1);
    }
}
