#include <stdio.h>

int main() {
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // a função que eu usei encontrar o maior dígito:
    int maiorDigito(int num) {
        int maior = 0;
        while (num > 0) {
            int digito = num % 10;
            if (digito > maior) {
                maior = digito;
            }
            num /= 10;
        }
        return maior;
    }

    int maiorDigitoNum1 = maiorDigito(num1);
    int maiorDigitoNum2 = maiorDigito(numero2);

    if (maiorDigitoNum1 == maiorDigitoNum2) {
        printf("Empate! Os números têm o mesmo maior dígito: %d\n", numero1 > numero2 ? numero1 : numero2);
    } else {
        printf("O número com o maior dígito é: %d\n", maiorDigitoNum1 > maiorDigitoNum2 ? numero1 : numero2);
    }
}
// eduardo, a maioria das coisas eu escrevi aqui foi antes da tempestade,
// não sei nem como explicar esse codigo OIIIIII
// aPARECEU????
//Cheguei pra resenha gurizada 