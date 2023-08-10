/* Elabore um função que rebeba tres notas de um aluno como parametros e uma letra. Se a letra 
 * for "A", a função deverá calcular a média aritmética das notas do aluno; se for "P", 
 * deverá calcular a média ponderada com pesos 5,3 e 2. Retorne a média calculada 
 * para o programa principal. */

#include <stdio.h>

float media (float notas[], char opcao[]){
    float soma;
    if ( opcao == "A" ){
        for (int i=0;i<3;i++){
            soma += notas[i];
        }
        return soma/3;
    }else if (opcao == "P"){
        for (int i=0;i<3;i++){
            soma += notas[i];
        }
        return ((notas[0]*5) + (notas[1]*3) + (notas[2]*2))/soma;
    }
}

int main(int argc, const char *argv[])
{
    float notas[3];
    char opcao[1];
    for(int i=0;i<3;i++){
        printf("[%d] Nota: ",i+1);
        scanf("%f",&notas[i]);
    }
    printf("Opcao: ");
    setbuf(stdin,NULL);
    fgets(opcao,1,stdin);
    if(opcao == "A") printf("Media aritmetica : %f\n",media(notas,opcao)); 
    else if (opcao == "P") printf("Media Ponderada: %f\n",media(notas,opcao));
    return 0;
}
