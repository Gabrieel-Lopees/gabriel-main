#include <stdio.h>

int main() {
    int numero, horas;
    float valor, salario;

    scanf("%d %d %f", &numero, &horas, &valor);
    salario = horas * valor;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = $ %.2f\n", salario);

    return 0;
}
