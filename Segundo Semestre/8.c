#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("olá, %s", nome);
    return 0;
}



