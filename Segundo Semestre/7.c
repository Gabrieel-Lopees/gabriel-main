#include<stdio.h>
#include<string.h>
int main() {
    char nome[10]; 
    char sobrenome[20];
    char nome_completo[40];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome); 

    printf("Nome Completo: %s", nome_completo);

    return 0;
}
