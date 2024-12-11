#include <stdio.h>
#define VAL 6
int buscar(int vetor[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main() {
    int valores[VAL] = {3, 5, 7, 9, 11, 13};
        printf("Valores: ");
    for (int j = 0; j < VAL; j++) {
        
        printf("%d\t", valores[j]);
    }

    int chave;
    printf("Digite aqui qual sua chave: ");
    scanf("%d", &chave);
    int indice = buscar(valores, VAL, chave);

    if (indice != -1) {
        printf("Elemento %d encontrado na posição %d\n", chave, indice);
    } else {
        printf("Elemento %d nao encontrado\n", chave);
    }
    return 0;
}
