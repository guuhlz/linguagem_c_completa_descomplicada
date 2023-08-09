/* Crie uma estrutura representado um hora. Essa estrutura deve conter os campos hora,minuto e 
 * segundo. Agora, escreva uma programa que leia um vetor de cinco posições dessa estrutura e 
 * imprima a maior hora. */

#include <stdio.h>
#include <stdbool.h>

struct tempo {
    int hora;
    int minuto;
    int segundo;
};

int main(int argc, const char *argv[])
{
    struct tempo relogio[5];

    int maiorHora    = 0;
    int maiorMinuto  = 0;
    int maiorSegundo = 0;
    int indice       = 0;
    bool maiorTempo;

    for(int i=0;i<5;i++){
        printf("[%d] Hora: ",i+1);
        scanf("%d",&relogio[i].hora);
        printf("[%d] Minuto: ",i+1);
        scanf("%d",&relogio[i].minuto);
        printf("[%d] Segundo: ",i+1);
        scanf("%d",&relogio[i].segundo);
        
        if (maiorHora <= relogio[i].hora && maiorMinuto <= relogio[i].minuto && maiorSegundo <= relogio[i].segundo){
            
            maiorHora    = relogio[i].hora;
            maiorMinuto  = relogio[i].minuto;
            maiorSegundo = relogio[i].segundo;
            
            indice = i;
        }
    }
    printf("Maior tempo -> %d:%d:%d\n",relogio[indice].hora,relogio[indice].minuto,relogio[indice].segundo);
    return 0;
}
