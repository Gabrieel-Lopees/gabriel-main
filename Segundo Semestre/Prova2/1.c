#include<stdio.h>
    
    int soma_vetor(int vetor[], int tamanho) {
        int soma = 0;
        for (int i = 0; i < tamanho; i++){
            soma += vetor[i];
        }
        return soma;
    }

int main() 
{
    int numeros[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("Soma: %d", soma_vetor(numeros, 5));
    printf("Soma: %d", soma_vetor(numeros, 7));
    return 0;
}

