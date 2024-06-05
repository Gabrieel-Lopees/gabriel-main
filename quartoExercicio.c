#include <stdio.h>

int main() {
    int a, b, c, d, i;
    int menor[4];

    printf("Digite 4 valores inteiros:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int values[4] = {a, b, c, d};

    for (i = 0; i < 4; i++) {
        int valorAtual = values[i];
        int menorDigito = 9;

        while (valorAtual > 0) {
            int digit = valorAtual % 10;
            if (digit < menorDigito) {
                menorDigito = digit;
            }
            valorAtual /= 10;
        }
        
        menor[i] = menorDigito;
    }

//  eu usei essas forma para lidar menor e maior valor, a identação não é boa, mas funciona
    for (i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (menor[i] > menor[j]) {
                int temp = menor[i];
                menor[i] = menor[j];
                menor[j] = temp;
            }
        }
    }

//  eu usei essa forma para o menor e maior valor, a identação não é boa, mas funciona

    int menorValor = menor[0] * 1000 + menor[1] * 100 + menor[2] * 10 + menor[3];
    int maiorValor = menor[3] * 1000 + menor[2] * 100 + menor[1] * 10 + menor[0];

    int soma = menorValor + maiorValor;
    int produto = menorValor * maiorValor;

    printf("Menor valor possivel: %04d\n", menorValor);
    printf("Maior valor possivel: %d\n", maiorValor);
    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);

}
