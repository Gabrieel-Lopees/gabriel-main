#include<stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres valores(X Y Z): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("O Valor maximo dentre os digitados e %d.", a);
    else {
    if (b > c)
        printf("O Valor maximo dentre os digitados e %d.", b);
    else {
    if (c > b && c > a)
        printf("O Valor maximo dentre os digitados e %d.", c);
    }
    }
}
