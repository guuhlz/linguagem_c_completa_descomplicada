/* Escreve uma programa que contenha uma estrutura representando uma data válida. 
 * Essa estrutura deve conter os campos dis, mês e ano. Em seguida, leia duas datas e 
 * armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas datas.*/

#include <stdio.h>

struct data {
    int dia,mes,ano;
};

int main(int argc, const char *argv[])
{
    struct data datas[2];
    int dia,mes,ano;
    int dias1,dias2;
    for(int i=0;i<2;i++){
        printf("[%d] Dia: ",i+1);
        scanf("%d",&datas[i].dia);
        printf("[%d] Mes: ",i+1);
        scanf("%d",&datas[i].mes);
        printf("[%d] Ano: ",i+1);
        scanf("%d",&datas[i].ano);
    }
    dias1 = datas[0].dia + ((datas[0].mes - 1)*30) + ((datas[0].ano - 1)*365);
    dias2 = datas[1].dia + ((datas[1].mes - 1)*30) + ((datas[1].ano - 1)*365);
    if (dias1 >= dias2) dia = dias1-dias2; else dia = dias2 - dias1;
    printf("Diferença em dias entre as datas: %d\n",dia);
    

    return 0;
}
