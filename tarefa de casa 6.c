#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("digite o valor em reais: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor %= 100;

    nota50 = valor / 50;
    valor %= 50;

    nota20 = valor / 20;
    valor %= 20;

    nota10 = valor / 10;
    valor %= 10;

    nota5 = valor / 5;
    valor %= 5;

    nota2 = valor / 2;
    valor %= 2;

    nota1 = valor;

    printf("Número de notas:\n");
    printf("R$100: %d\n", nota100);
    printf("R$50: %d\n", nota50);
    printf("R$20: %d\n", nota20);
    printf("R$10: %d\n", nota10);
    printf("R$5: %d\n", nota5);
    printf("R$2: %d\n", nota2);
    printf("R$1: %d\n", nota1);

    return 0;
}
