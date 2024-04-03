#include<stdio.h>

main() {
    float hora, minuto, hora2, minuto2, diff;
    printf("Digite dois horarios diferentes(HH:MM HH:MM): ");
    scanf("%f:%f" "%f:%f", &hora, &minuto, &hora2, &minuto2);

    minuto = (hora * 60) + minuto;
    minuto2 = (hora2 * 60) + minuto2;

    diff = minuto - minuto2;

if (diff = 60) {
        printf("O intervalo entre os horarios eh exatamente de uma hora");
    } else if (diff > 60) {
        printf("O intervalo entre os horarios eh superior a uma hora");
    } else {
        printf("O intervalo entre os horarios eh inferior a uma hora");
    }
}
