// 1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
// armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
// estrutura lida.


#include <stdio.h>

struct dados {
    char nome [80];
    int idade;
    char endereco[80];
};
int main(int argc, const char *argv[])
{
    struct dados leitura;

    printf("Nome: ");
    setbuf(stdin,NULL);
    fgets(leitura.nome,80,stdin);
    printf("Idade : ");
    scanf("%d",&leitura.idade);
    printf("Endereco :");
    setbuf(stdin,NULL);
    fgets(leitura.endereco,80,stdin);

    printf("%s %d %s",leitura.nome,leitura.idade,leitura.endereco);

    return 0;
}
