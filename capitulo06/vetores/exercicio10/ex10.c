/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcu-
 * le o quadrado de cada elemento desse vetor armazenando esse resultado em outro
 * vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
 * de números.*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int numero[10];
    int quadrado[10];

    for(int k=0; k<10; k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);

        quadrado[k] = numero[k]*numero[k];
    }
    printf("Numero \t Quadrado\n");
    for(int k =0; k<10; k++)
    {
        printf("%d \t %d\n",numero[k],quadrado[k]);
    }
    return 0;
}


