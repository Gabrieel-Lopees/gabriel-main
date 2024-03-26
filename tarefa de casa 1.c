#include <stdio.h>

int main() {
    int elementos, fracao;
    float porcentagem;

    printf("Digite o numero de elementos da amostragem: ");
    scanf("%d", &elementos);

    printf("digite a fracao da amostragem: ");
    scanf("%d", &fracao);

    porcentagem = ((float)fracao / elementos) * 100;

    printf("a porcentagem representada pela fracao eh: %.2f%%\n", porcentagem);
}
