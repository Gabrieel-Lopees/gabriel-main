#include<stdio.h>

main(){
    float inteiro1, inteiro2, resultado;
    char caractere;
        printf("Digite a operacao que deseja fazer (+, -, *, /) com dois inteiros: ");
        scanf("%f %c %f", &inteiro1, &caractere, &inteiro2);

    switch (caractere) {
    case '+':
        resultado = inteiro1 + inteiro2;
        break;

    case '-':
        resultado = inteiro1 - inteiro2;
        break;

    case '*':
        resultado = inteiro1 * inteiro2;
        break;

     case '/':
        if (inteiro2 != 0) {
            resultado = inteiro1 / inteiro2;
        } else {
            printf("Erro: Divisao por zero nao eh permitida");
                return 1;
        }
    }
    printf("o resultado da operazaum eh: %g", resultado);
}
