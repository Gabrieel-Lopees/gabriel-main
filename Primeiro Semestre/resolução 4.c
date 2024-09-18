#include<stdio.h>

int main(){
    int hora, min, seg;
    printf("Digite o horario (HH:MM:SS): ");
    scanf("%d:%d:%d", &hora, &min, &seg);
    segundo++;
    
    // hora = hora + min / 60;
    // min = min + seg /60;
    // segundo = segundo % 60;

    hora = hora + min / 60; 
    min += seg / 60;
    seg %= 60;
    hora = hora % 24;
    printf("Horario um segundo depois: %.2d:%.2d:%.2d:\n", hora, min, seg);
    return 0;
}
