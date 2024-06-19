#include <stdio.h>

int main() {
    int A, B, C, D, diferenca=0;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    diferenca = (A * B) - (C * D);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
