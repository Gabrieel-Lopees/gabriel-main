#include<stdio.h>

int main()
{
    int a, r, an;
    printf("Insira um elemento de progress�o aritmetica: ");
    scanf("%d", &a);

    printf("Insira a raz�o: ");
    scanf("%d", &r);

    printf("Os 10 elementos seguintes da PA s�o:\n");
    for (int n = 1; n <=10; n++) {
        an = a + n * r;
        printf("%d\n", an);
    }
}
