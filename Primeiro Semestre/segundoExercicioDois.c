#include <stdio.h>

int bissexto(int ano) {
    if (ano % 400 == 0) return 1;
    if (ano % 100 == 0) return 0;
    if (ano % 4 == 0) return 1;
    return 0;
}

int main() {
    int dia, mes, ano;
    printf("Digite o dia, mês e ano (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int dias_no_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (bissexto(ano)) dias_no_mes[1] = 29;

    int dias_passados = dia;
    for (int i = 0; i < mes - 1; i++) {
        dias_passados += dias_no_mes[i];
    }

    double porcentagem = 100.0 * dias_passados / (bissexto(ano) ? 366 : 365);
    printf("Ao final do dia %02d/%02d/%04d, %.4lf%% do ano já passou.\n", dia, mes, ano, porcentagem);

    return 0;
}