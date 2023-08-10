/* Elabore uma função que receba três números inteiros como parametro, representando horas, 
 * minutos e segundos. A função deve retornar esse horário convertido em segundos.*/

#include <stdio.h>

int segundos (int hora,int minuto,int segundo){
    return hora*3600 + minuto*60 + segundo;
}

int main(int argc, const char *argv[])
{
    printf("Tempo em segundos: %d\n",segundos(1,10,50));

    
    return 0;
}
