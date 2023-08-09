/* Crie uma enumeraçao representando os dias da semana. Agora, escreva um programa que leia um 
 * valor inteiro do teclado e exiba o dia da semana correspondente. */

#include <stdio.h>

enum dias {segunda=1,terca,quarta,quinta,sexta,sabado,domingo};

char dia[][20] = {
        "segunda",
        "terca",
        "quarta",
        "quinta",
        "sexta",
        "sabado",
        "domingo"
    };

int main(int argc, const char *argv[])
{
        enum dias diaSemana;
        
        printf("Dia da semana: ");
        scanf("%d",&diaSemana);

        switch (diaSemana) {
            case 1:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 2:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 3:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 4:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 5:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 6:
                printf("%s\n",dia[diaSemana]); 
            break;
            case 7:
                printf("%s\n",dia[diaSemana]); 
            break;
            default:
                printf("Dia invalido\n");
               
       } 
    return 0;
}
