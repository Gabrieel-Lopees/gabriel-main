#include<stdio.h>

main(){
    int K, n, J;
    float S = 0;
    printf("Digite dois valores K e N para serem calculados igual S: ");
    scanf("%d %d", &K, &n);

        for (J = 1; J <= n; J++){
        S += (K + J) * (J + 1);
        }

    printf("O valor de S eh: %.2f", S);
}
