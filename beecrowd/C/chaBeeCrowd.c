#include<stdio.h>

main(){
    int T, acertos;
    int A, B, C, D, E;

    scanf("%d\n", &T);
    scanf("%d" "%d" "%d" "%d" "%d", &A, &B, &C, &D, &E);

    if (A == T) acertos++;
    if (B == T) acertos++;
    if (C == T) acertos++;
    if (D == T) acertos++;
    if (E == T) acertos++;

    printf("%d\n", acertos);
}
