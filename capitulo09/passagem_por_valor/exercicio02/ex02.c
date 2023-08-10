/* Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua 
 * quantidade de dias de acordo com o número digitado pelo usuário. */

#include <stdio.h>

char meses [][20] = {
    "Janeiro",
    "Fevereiro",
    "Marco",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
};

void mes (int num){
    switch (num) {
        case 1:
            printf("%s",meses[num-1]);
            break;
        case 2:
            printf("%s",meses[num-1]);
            break;
        case 3:
            printf("%s",meses[num-1]);
            break;
        case 4:
            printf("%s",meses[num-1]);
            break;
        case 5:
            printf("%s",meses[num-1]);
            break;
        case 6:
            printf("%s",meses[num-1]);
            break;
        case 7:
            printf("%s",meses[num-1]);
            break;
        case 8:
            printf("%s",meses[num-1]);
        case 9:
            printf("%s",meses[num-1]);
            break;
        case 10:
            printf("%s",meses[num-1]);
            break;
        case 11:
            printf("%s",meses[num-1]);
            break;
        case 12:
            printf("%s",meses[num-1]);
            break;
        default:
            printf("Mes invalido\n");
    }

    if(num == 1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12){
        printf(" - 31 dias\n");
    } else if (num == 4 || num==6 || num==9 || num==11){
        printf(" - 30 dias\n");
    } else{
        printf(" - 28 dias\n");
    }
}

int main(int argc, const char *argv[])
{
    int numeroMes;
    printf("Mes : ");
    scanf("%d",&numeroMes);

    mes(numeroMes);
    return 0;
}

