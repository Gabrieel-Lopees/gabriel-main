#include<stdio.h>

int main() {
    float  nota1, nota2, media, exame,  falta_exame;
    printf("Digite suas duas notas (XX XX) : ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0){
        printf("Parabens! voce foi aprovador! com media %.2f.\n", media);

           } else if (media < 7.0) {
            falta_exame = 10 - media;
        printf("Voce esta em exame. Sua media atual é %.2f.\n", media);
        printf("Voce precisa tirar %.2f no exame para ser aprovado.\n", falta_exame);

        } else {
            falta_exame = 10 - media;
            printf("Infelizmente, voce foi reprovado com média %.2f.\n", media);
            printf("Voce precisa tirar %.2f no exame para ser aprovado.\n", falta_exame);
        }
        return 0;

    }


