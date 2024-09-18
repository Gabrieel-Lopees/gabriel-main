#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int numero, digito1, digito2, resultado;

    printf("Digite um numero de dois digitos: ");
    scanf("%d", &numero);

    if (numero < 10 || numero > 99) {
        printf("numero invalido. digite um numero de dois digitos. \n");
        return 1;
    }

    digito1 = numero / 10;
    digito2 = numero % 10;

    resultado = numero - (digito1 + digito2);
    printf("O resultado da subtração dos digitos é: %d\n", resultado);

    return 0;
}
