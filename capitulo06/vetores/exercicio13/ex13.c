/*13) Faça um programa para ler 10 números diferentes a serem armazenados em um
 * vetor. Os números deverão ser armazenados no vetor na ordem em que forem li-
 * dos, sendo que, caso o usuário digite um número que já foi digitado anteriormen-
 * te, o programa deverá pedir a ele para digitar outro número. Note que cada valor
 * digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
 * os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.*/

#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero[10];

    for(int k=0;k<10;k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);

        if(k>=1)
        {
            for(int l=k-1; l>=0; l--)
            {
                if(numero[k] == numero[l])
                {
                    printf("Numero ja armazenado\n");
                    k--;
                    break;
                }
            }
        }
    }
    return 0;
}
