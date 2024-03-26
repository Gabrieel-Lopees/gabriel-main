#include<stdio.h>

int main() {
    int dia, mes, ano;
    int diaHj, mesHj, anoHj;
    int diasVividos;

    printf("Digite a data de nascimento(DD MM AAAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Digite a data atual (DD MM AAAAA): ");
    scanf("%d %d %d", &diaHj, &mesHj, &anoHj);

    diasVividos = (anoHj - ano) * 365 + (mesHj - mes) * 30 + (diaHj -  dia);
    printf("O numero de dias vividos eh: %d\n", diasVividos);
    
    return 0;
}
