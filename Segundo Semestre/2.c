#include<stdio.h>

int maior_valor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}


int main()
{
    int valores[5] = {3, 45, 7, 9, 21};

    int maior = maior_valor(valores, 5);

    printf("O maior valor do vetor e: %d\n", maior);

    return 0;
}
