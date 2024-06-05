#include <stdio.h>

// MDC
int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

// simplificar 
simplificar(int *numerador, int *denominador) {
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}



int main() {
    int num1, den1, num2, den2;

    printf("Digite a primeira fracao (numerador/denominador): ");
    scanf("%d/%d", &num1, &den1);

    printf("Digite a segunda fracao (numerador/denominador): ");
    scanf("%d/%d", &num2, &den2);

    // soma das frações
    int soma_numerador = num1 * den2 + num2 * den1;
    int soma_denominador = den1 * den2;

    // divisão da primeira fração p/ segunda
    int div_numerador = num1 * den2;
    int div_denominador = den1 * num2;

    // Simplifica os resultados
    simplificar(&soma_numerador, &soma_denominador);
    simplificar(&div_numerador, &div_denominador);

    printf("A soma das fracoes eh: %d/%d\n", soma_numerador, soma_denominador);
    printf("A divisao da primeira fracao pela segunda eh: %d/%d\n", div_numerador, div_denominador);
}

