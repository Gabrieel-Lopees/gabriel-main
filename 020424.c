#include<stdio.h>

main() {
    int x;
    printf("Digite um valor interio nao negativo: ");
    scanf ("%d", &x);

    x = x% 2;

    switch (x) {
    case 0: printf("O numero informado e par.");
    break;
    default: printf("O numero informado e impar.");

    }
}
