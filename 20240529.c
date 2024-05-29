#include<stdio.h>
#define TAM 5

main() {
    int valor, i, vet[TAM];
    printf("Digite %d valores para o vetor: ", TAM);
    for (i = 0; i < TAM; i++)
        scanf("%d", &vet[i]);
    printf ("Digite o valor para procurar no vetor: ");
        scanf("%d", &valor);
}