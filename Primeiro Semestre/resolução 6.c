#include<stdio.h>

main() {
    int valor, cedulas;
    printf("Por favor, digite o valor em reais: ");
    scanf("%d", &valor);
    cedulas = valor / 100;
    // valor = valor % 100;

    valor = valor - (cedulas * 100);
}