#include<stdio.h>

int main()
{
    int a, b, c;
    int resultado;

    printf("insira as dimensões do lado do triangulo(a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Sim, são as dimensões de um triangulo valido ");

       } else {
            printf("Não");
            system("eject");

       }
}


