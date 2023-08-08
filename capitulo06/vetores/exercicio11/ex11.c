/* 11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números. */

#include <stdio.h>
#define MAX 20

int main (int argc, char *argv[])
{

  int vetor[MAX];
  int vetor_quadrado[MAX];

  for(int k=0;k<MAX;k++){
    printf("[%d]Vetor: ",k+1);
    scanf("%d",&vetor[k]);
  }

  for(int k=0;k<MAX;k++){
    vetor_quadrado[k] = vetor[k] * vetor[k];
    printf("vetor: %d vetor^2: %d\n",vetor[k],vetor_quadrado[k]);
  }

  return 0;
}
