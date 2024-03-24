#include <stdio.h>

int main() {
    int elementos, fracao;
    float porcentagem;

    // aqui que solicita para o usuario o numero toal de elementos e a fração
    printf("Digite o numero de elementos da amostragem: ");
    scanf("%d", &elementos);

    printf("digite a fração da amostragem: ");
    scanf("%d", &fracao);

    // calcula a porcentagem
    porcentagem = ((float)fracao / elementos) * 100;

    // exibir o resultadooo
    printf("a porcentagem representada pela fracao eh: %.2f%%\n", porcentagem);
}
