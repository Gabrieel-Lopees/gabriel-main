#include<stdio.h>

int main()
{
    int a, b, c;
    int resultado;

    printf("insira as dimens�es do lado do triangulo(a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Sim, s�o as dimens�es de um triangulo valido ");

       } else {
            printf("N�o");
            system("eject");

       }
}


