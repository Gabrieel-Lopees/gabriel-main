#include<stdio.h>

// junho = 6
// novembro = 11

main() {
    int mesAtual;
    printf("Digite o numero do mes para saber se a temporada esta em andamento: ");
    scanf("%d", &mesAtual);

     if (mesAtual >= 7 && mesAtual <= 10) {
        printf("A temporada nao esta acontecendo. ");
    }
    else if (mesAtual >= 12) {
        printf("Numero invalido. ");
    }
    else {
        printf("A temporada está acontecendo. ");
    }
}

