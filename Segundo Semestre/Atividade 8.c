#include<stdio.h>

int main()
{
    int a, r, an;
    printf("Insira um elemento de progressão aritmetica: ");
    scanf("%d", &a);

    printf("Insira a razão: ");
    scanf("%d", &r);

    printf("Os 10 elementos seguintes da PA são:\n");
    for (int n = 1; n <=10; n++) {
        an = a + n * r;
        printf("%d\n", an);
    }
}
