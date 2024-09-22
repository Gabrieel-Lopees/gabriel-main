#include<stdio.h>

int main(){

    int eleitores;
    double votosNecessarios;

    printf("Insira o numero de eleitores: ");
    scanf("%d", &eleitores);

    votosNecessarios = (eleitores / 2.0) + 1;

    printf("Para vencer no primeiro turno, pablo marssal precisa de pelo menos %.0f votos. \n", votosNecessarios);

    return 0;
}
