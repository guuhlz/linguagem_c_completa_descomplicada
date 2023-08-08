/*
10) A importância de R$780.000,00 será dividida entre três ganhadores de um con-
curso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorPremio = 780000.0;
    float valorPremio1 = 0;
    float valorPremio2 = 0;
    float valorPremio3 = 0;

    valorPremio1 = valorPremio * 0.46f;
    valorPremio2 = valorPremio * 0.32f;
    valorPremio3 = valorPremio - (valorPremio1 + valorPremio2);

    printf( "Premio 1: %.2f\n"
            "Premio 2: %.2f\n"
            "Premio 3: %.2f\n",
            valorPremio1,valorPremio2,valorPremio3);
    return 0;
}
