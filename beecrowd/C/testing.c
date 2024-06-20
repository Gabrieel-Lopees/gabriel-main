#include <stdio.h>

int main() {
    char vendedor;
    double salarioFixo, dinheiroVendas;
    scanf("%s", &vendedor);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &dinheiroVendas);

    double TOTAL;
    TOTAL = salarioFixo + (dinheiroVendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
