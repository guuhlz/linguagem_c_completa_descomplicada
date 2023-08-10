/* 17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N
alocado dinamicamente, em que cada posição de B é a soma dos números daquela
coluna da matriz.
 */

#include <stdlib.h>
#include <stdio.h>
// #include <malloc.h>

#define N 3

int* matriz_soma_coluna(int** matriz, int* vetor);

int main (int argc, char *argv[]) {

  int **A = malloc(N * sizeof(int*));
  int *B = malloc(N * sizeof(int));
  int *result;
  int cont = 0;

  for(int k=0; k<N; k++){
    A[k] = malloc(N * sizeof(int));
  }

  for(int k=0;k<N;k++){
    B[k] = 0;
    for(int l=0; l<N;l++){
      A[k][l] = k+l+1;
      printf("%d ",A[k][l]);
    }
    printf("\n");
  }

  result = matriz_soma_coluna(A,B);
  printf("-------+\n");
  for(int k=0; k<N;k++) printf("%d ",*(result + k));
  printf("\n");

  for (int k = 0; k < N; k++) {
      free(A[k]);
  }
  free(A);
  free(B);

  
  return 0;
}


int* matriz_soma_coluna(int** matriz, int* vetor){

  for(int k=0;k<N;k++){
    for(int l=0; l<N;l++){
      vetor[k] += matriz[l][k];
    }
  }

  return vetor;
}
