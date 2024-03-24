#include<stdio.h>

int main(){
    int hora, min, seg;
    printf("Digite o horario (HH:MM:SS): ");
    scanf("%d:%d:%d", &hora, &min, &seg);

    if (hora < 0 || hora > 23 || min < 0 || min > 59 || seg < 0 || seg > 59) {
        printf("Horario invalido. \n");
        return 1;
    
    }
    seg++; 

    if (seg >= 60) {
        seg = 0;
        min++;
        if (min >= 60) {
            min = 0;
            hora++;
            if (hora >= 24) {
                hora = 0;
            }
        }
    }
    printf("Horario um segundo depois: %.2d:%.2d:%.2d:\n", hora, min, seg);
    return 0;

}
