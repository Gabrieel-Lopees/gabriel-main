#include<stdio.h>

main() {
    float horas, sal, horas2, sal2;
    int salora, salora2;
    printf("Digite as horas de aula e o salario por hora do professor: ");
    scanf("%f" "%f", &horas, &sal);

    printf("Digite as horas de aula e o salario por hora do OUTRO professor: ");
    scanf("%f" "%f", &horas2, &sal2);

    salora = (sal * horas);
    salora2 = (sal2 * horas2);

    printf("o salario do primeiro professor eh %d, e do segundo eh %d", salora, salora2);
}
