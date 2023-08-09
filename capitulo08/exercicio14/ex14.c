/* 14) Crie uma enumeração representando os itens de uma lista de compras. Agora,
escreva um programa que leia um valor inteiro do teclado e exiba o nome do item
comprado e o seu preço. */


#include <stdio.h>

enum items {
  item1=1,
  item2,
  item3,
  item4,
  item5
};

int main (int argc, char *argv[])
{
  int item =0;

  printf("Item: ");
  scanf("%d",&item);

  switch (item) {
    case 1:
      printf("Item1 - valor 100\n");
      break;
    case 2:
      printf("Item2 - valor 200\n");
      break;
    case 3:
      printf("Item3 - valor 300\n");
      break;
    case 4:
      printf("Item4 - valor 400\n");
      break;
    case 5:
      printf("Item5 - valor 500\n");
      break;
    default:
      printf("Invalido\n");
      
      break;
  }
  return 0;
}
