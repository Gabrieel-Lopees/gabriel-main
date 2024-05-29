#include<stdio.h>
#define TAM 5

main() {
    int valor, i, vet[TAM], achou;
    printf("Digite %d valores para o vetor: ", TAM);
    for (i = 0; i < TAM; i++)
        scanf("%d", &vet[i]);
    printf ("Digite o valor para procurar no vetor: ");
        scanf("%d", &valor);

    for (i = 0; i < TAM; i++) {
        if(vet[i] == valor) {
            printf("O Valor %d esta no vetor, na posicao %d.", vet[i], i);
            achou++;
        }
    }
    achou = 0
    for (i = 0; i < TAM; i++) {
        if (vet[i] == valor){
            printf("O valor %d esta no vtor, na posicao %d.", vet[i], i);
            achou = 1;
        }
    }
}