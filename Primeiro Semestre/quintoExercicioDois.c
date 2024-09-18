#include <stdio.h>

int sequencia(int n) {
    int comprimento = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        comprimento++;
    }
    return comprimento;
}

void imprimeSequencia(int n) {
    printf("%d", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        printf(" %d", n);
    }
    printf("\n");
}

int main() {
    int maiorComprimento = 0;
    int valorInicial = 0;

    for (int i = 10; i <= 200; i++) {
        int comprimentoAtual = sequencia(i);
        if (comprimentoAtual > maiorComprimento) {
            maiorComprimento = comprimentoAtual;
            valorInicial = i;
        }
    }

    printf("Valor inicial com a sequencia mais longa: %d\n", valorInicial);
    printf("Comprimento da sequencia: %d\n", maiorComprimento);
    printf("A Sequencia: \n ");
    imprimeSequencia(valorInicial);

    return 0;
}
