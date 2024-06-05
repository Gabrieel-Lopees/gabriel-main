#include <stdio.h>

int sequenciaCollatz(int n) {
    int comprimento = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        comprimento++;
    }
    return comprimento;
}

int main() {
    int maxComprimento = 0;
    int longest_start = 0;

    for (int i = 10; i <= 200; i++) {
        int atualComprimento = sequenciaCollatz(i);
        if (atualComprimento > maxComprimento) {
            maxComprimento = atualComprimento;
            longest_start = i;
        }
    }

    printf("Sequência mais longa (tamanho %d) começa com %d:\n", maxComprimento, longest_start);
    int n = longest_start;
    while (n != 1) {
        printf("%d, ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n");

    return 0;
}
