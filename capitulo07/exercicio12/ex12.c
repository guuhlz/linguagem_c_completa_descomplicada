/* 12) Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista. */


#include <stdio.h>

int main (int argc, char *argv[])
{
  char mercadoria[32];
  float valor;
  float valor_desconto;

  printf("Mercadoria: ");
  fgets(mercadoria,32,stdin);
  printf("Valor: ");
  scanf("%f",&valor);

  printf("Mercadoria: %sValor Total: %f\nValor Desconto: %f\nValor a ser pago: %f\n",
         mercadoria,valor,valor*0.1,valor*0.9);
  return 0;
}
