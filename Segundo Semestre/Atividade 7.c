#include<stdio.h>

int main()
{
    int a, b, produto = 0;

    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0){
        printf("Erro!");
        return 1;
    }

    for (int i = 0; i < b; i++){
        produto += a;
    }
    printf("o produto de %d e %d é: %d\n", a, b, produto);
    return 0;
}
