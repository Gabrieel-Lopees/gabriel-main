#include<stdio.h>

main() {
    float media, exame, nota2;
    printf("Digite suas notas: ");
    scanf("%f" "%f", &exame, &nota2);
    media = exame + nota2;

    if(media >= 7) {
        printf("parabens aprovado!!");
    }
    else if (exame >= 5) {
        printf("aprovado!!");
    }
    else {
        printf("reprovado.");
    }
}
