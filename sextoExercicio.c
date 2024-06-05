#include <stdio.h>

// Fun��o para inverter os d�gitos de um n�mero decimal
int inverteDecimal(int x) {
    int i = 0;
    do {
        i = i * 10 + (x % 10);
        x = x / 10;
    } while (x > 0);
    return i;
}

// Fun��o para inverter os d�gitos de um n�mero hexadecimal
int inverteHex(int x) {
    int i = 0;
    do {
        i = i * 16 + (x % 16);
        x = x / 16;
    } while (x > 0);
    return i;
}

int main() {
    for (int num = 0; num <= 10000; num++) {
        int invertedDecimal = inverteDecimal(num);
        int invertedHex = inverteHex(num);

        if (num == invertedDecimal && num == invertedHex) {
            printf("Numero %d.\n", num);
        }
    }
    printf("Sao capicua Decimal e Hexadecimal");
    return 0;
}
