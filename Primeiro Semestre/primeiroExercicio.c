#include <stdio.h>

// Função para calcular o máximo divisor comum (MDC) usando o algoritmo de Euclides
int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}
// Função para simplificar uma fração
void simplificar(int *num, int *den) {
    int divisor = mdc(*num, *den);
    *num /= divisor;
    *den /= divisor;
}

int main(){
    int num1, den1, num2, den2;
    int soma_num, soma_den, div_num, div_den;

    // Leitura das frações
    printf("Digite a primeira fracao no formato numerador/denominador: ");
    scanf("%d/%d", &num1, &den1);

    printf("Digite a segunda fracao no formato numerador/denominador: ");
    scanf("%d/%d", &num2, &den2);

    // Cálculo da soma das frações
    soma_num = num1 * den2 + num2 * den1;
    soma_den = den1 * den2;

    // Simplificação da fração resultante da soma
    // simplificar(&soma_num, &soma_den);

    // Cálculo da divisão da primeira fração pela segunda
    div_num = num1 * den2;
    div_den = den1 * num2;

    // Simplificação da fração resultante da divisão
    simplificar(&div_num, &div_den);

    // Exibição dos resultados
    printf("Soma das fracoes: %d/%d\n", soma_num, soma_den);
    printf("Divisao da primeira fracao pela segunda: %d/%d\n", div_num, div_den);
}
