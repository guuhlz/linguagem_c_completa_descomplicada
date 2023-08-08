/*Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
 * seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
 * calculadas como
 */

#include <math.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{

  int a,b,c;

  printf("Coeficiente a: ");
  scanf("%d",&a);
  printf("Coeficiente b: ");
  scanf("%d",&b);
  printf("Coeficiente c: ");
  scanf("%d",&c);

  if(a == 0){
    printf("a tem que ser diferente de zero");
    return 0;
  }

  int delta = (b*b) - 4*a*c;
  printf("Delta: %d\n",delta);

  if(delta < 0){
    printf("Nao existe raiz real\n");
  }else if(delta == 0){
    float x = (-b + sqrt(delta)) / 2 * a; 
    printf("Raiz unica - %f\n",x);
  }else if(delta > 0){
    float x1 = (-b + sqrt(delta)) / 2 * a; 
    float x2 = (-b - sqrt(delta)) / 2 * a; 
    printf("Duas raizes x1: %f - x2:%f \n",x1,x2);
  }
	
	return 0;
}

 
