#include<stdio.h>

main() {
    int ler, maior = 0;
    printf("Digite uma sequencia de valores positivos, e um negativo para encerrar: ");
    do {
        scanf("%d", &ler);
    if (ler > maior) 
        maior = ler;
    } while(ler > 0);
    printf("O maior valor informado foi %d", maior);
}