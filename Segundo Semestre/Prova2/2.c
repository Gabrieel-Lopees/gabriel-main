#include<stdio.h>

int maior_valor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int valores[5] = {15, 123, 3, 89, 21};


    int maior = maior_valor(valores, 5);
    printf("O maior valor do vetor é: %d\n", maior);

    return 0;
}
