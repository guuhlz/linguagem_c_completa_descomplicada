/*16) Em matemática, o número harmônico designado por Hn define-se como o enési-
 * mo termo da série harmônica.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int enesimoHarmonioca = 0;

    printf("Enesino Harmonica: ");
    scanf("%d",&enesimoHarmonioca);

    for(int i =1; i<enesimoHarmonioca+1; i++)
    {
        printf ("[%d]%f\n",i,(float)1/i);
    }
    return 0;
}
