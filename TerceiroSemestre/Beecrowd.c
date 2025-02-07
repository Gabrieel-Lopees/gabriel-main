#include <stdio.h>
 
int main() {
    int codigo;
    float preso, conta;

    scanf("%d %f", &codigo, &preso);
    
    if (codigo == 1) (conta = 4.00 * preso);
    else if (codigo == 2) (conta = 4.50 * preso);
    else if (codigo == 3) (conta = 5.00 * preso);
    else if (codigo == 4) (conta = 2.00 * preso);
    else if (codigo == 5) (conta = 1.50 * preso);

    printf("Total: R$ %.2f", conta);

    return 0;
    }
