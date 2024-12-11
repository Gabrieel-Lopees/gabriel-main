#include <stdio.h>

// Bubble Sort

void bubble_sort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int valores[5] = {34, 12, 5, 67, 1};
    int tamanho = 5;

    bubble_sort(valores, tamanho);

    printf("Vetor ordenado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    return 0;
}


