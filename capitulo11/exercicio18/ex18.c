/* 18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus
tamanhos. A função deve retornar o ponteiro para uma matriz C, em que C é o
produto da multiplicação da matriz A pela matriz B. Se a multiplicação das matri-
zes não for possível, retorne um ponteiro nulo. */

#include <stdlib.h>
#include <stdio.h>

int** matriz_multiplicacao(int** A, int** B, int m1, int n1, int m2,int n2);


int main (int argc, char *argv[]){

  int** A;
  int** B;
  int m1=3,n1=3,m2=3,n2=1;
  int **r;
  int cont=1;

  A = malloc(m1 * sizeof(int*));
  for(int k=0; k<m1; k++){
    A[k] = malloc(n1 * sizeof(int));
  }
  for(int k=0; k<m1;k++){
    for(int l=0; l<n1; l++){
      A[k][l] = k+l+1;
      printf("%d ",A[k][l]);
    }
    printf("\n");
  }
  printf("------");
  printf("\n");

  B = malloc(m2 * sizeof(int*));
  for(int k=0; k<m1; k++){
    B[k] = malloc(n2 * sizeof(int));
  }
  for(int k=0; k<m2;k++){
    for(int l=0; l<n2;l++){
      B[k][l] = k+l+2;
      printf("%d ",B[k][l]);
    }
    printf("\n");
  }
  printf("------");
  printf("\n");


  r = matriz_multiplicacao(A,B,m1,n1,m2,n2);


  if(r != NULL){
    for(int k=0; k<m1; k++){
      for(int l=0; l<n2; l++){
        printf("%d ",r[k][l]);
      }
      printf("\n");
    }
  }else printf("Multiplicacao invalida\n");


  for(int k=0; k<n1; k++){
    free(A[k]); 
  }
  for(int k=0; k<n2; k++){
    free(B[k]); 
  }
  free(A);
  free(B);
  return 0;
}

int** matriz_multiplicacao(int** A, int** B, int m1, int n1, int m2,int n2){
  int** result;
  result = malloc(n2 * sizeof(int*));
  for(int k=0; k<m1; k++){
    result[k] = malloc(m1 * sizeof(int));
  }

  if(n1!=m2){
    return NULL;
  }

  for(int k=0; k<m1; k++){
    for(int l=0; l<n2; l++){
      for(int m=0; m<m2;m++){
        result[k][l] = result[k][l] + A[k][m]*B[m][l];
      }
    }
  }

  return result;

}
