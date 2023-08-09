/* Crie uma enumeração representando os dias da semana. 
 * Agora, escreva um programa que leia um valor inteiro do teclado e exiba o nome do mês 
 * corresponte e quantos dias ele possui.  */

#include <stdio.h>

enum DiasSemana{
  JANEIRO = 1,
  FEVEREIRO,
  MARCO,
  ABRIL,
  MAIO,
  JUNHO,
  JULHO,
  AGOSTO,
  SETEMBRO,
  OUTUBRO,
  NOVEMBRO,
  DEZEMBRO
};

int main (int argc, char *argv[])
{
  int mes;
  printf("Numero mes:");
  scanf("%d",&mes);

  if(mes <= 0 || mes > 12){
    printf("Mes invalido\n");
    return 0;
  }

  if(mes == ABRIL || mes == JUNHO || mes == SETEMBRO || mes == NOVEMBRO){
    printf("30\n");
  }else if (mes == FEVEREIRO){
    printf("28\n");
  }else{
    printf("31\n");
  }
  
  return 0;
}


// Cada uma das 12 divisões do ano solar, sendo quatro (abril, junho, setembro e novembro) com 30 
// dias, sete (janeiro, março, maio, julho, agosto, outubro e dezembro) com 31 dias e o único mês, 
// fevereiro, com 28 dias
