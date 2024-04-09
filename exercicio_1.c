#include<stdio.h>
int main(){
    float eleitores, votos;
        printf ("digite o numero de eleitores:\n");
        scanf ("%d", &eleitores);

    votos = (eleitores / 2) + 1;
    printf("Numero de votos necessarios no primeiro turno: %d\n", votos);
}
