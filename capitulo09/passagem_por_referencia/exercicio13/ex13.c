 // Crie uma função que receba um vetor de tamanho N e ordene os seus valores
 
 #include <stdio.h>
 #include <stdlib.h>

void imprime(int *vet, int size);
void preenche(int *vet, int size);
void shellSort(int *numeros, int n);
 int main (int argc, char *argv[])
 {
    int n = 0;
    printf("Tamanho vetor: ");
    scanf("%d",&n);
    int numeros[n];
    preenche(numeros,n);
    imprime(numeros,n);
    shellSort(numeros,n);
    imprime(numeros,n);

    return 0;
 }

 void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}

 void imprime(int *vet, int size){
     for(int k=0; k<size; k++){
         printf("%d|",vet[k]);
     }
     printf("\n");
 }

 void preenche(int *vet, int size){
     for(int k=0; k<size; k++){
         vet[k] = rand() % 100;
     }
     printf("\n");
 }
