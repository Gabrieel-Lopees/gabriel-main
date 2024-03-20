#include<stdio.h>

main() {
    int v1, v2, v3, v4, v5;
    float media;
    printf("Digite os 5 valores: ");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    scanf("%d", &v5);
    /* primeira forma */
    // media = (v1 + v2 + v3 + v4 + v5) / 5.0; // constante float
    /* segunda forma */
    media = v1 + v2 + v3 + v4 + v5;
    media = media / 5;
    /* terceira forma */
    // media = (float) (v1 + v2 + v3 + v4 + v5) / 5;
    printf("a media dos valores e %f", media);
}
