#include<stdio.h>
#define MAXNOME 100
int main()
{
    char nome[MAXNOME];
    printf("Digite seu lindo nome: ");
    fgets(nome, MAXNOME, stdin);

    printf("Ola %s", nome);


    return 0;
}
