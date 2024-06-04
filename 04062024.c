#include<stdio.h>
#define TAM 10

main(){
    int vet [TAM], i, j, achou;
        printf("Digite os %d valores do vetor: ", TAM);
    for (i = 0; i < TAM; i++)
        scanf("%d", &vet[i]);
    achou = 0;
    for (i = 0; i < TAM && !achou; i++) {
        for (j = i+1; j < TAM && !achou; j++){
            if (vet[i] == vet[j]) {
                achou = 1;
            }
        }
    }
    
    if (achou)
        printf("Ha Repetição.");
    else
        printf("Nao ha repetição");
}