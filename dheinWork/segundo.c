#include <stdio.h>

// é bissexto?
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 1;
    else
        return 0;
}

// dias no mês
int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        if (ehBissexto(ano))
            return 29;
        else
            return 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

// dias decorridos até a data
int diasDecorridos(int dia, int mes, int ano) {
    int dias = 0;
    for (int i = 1; i < mes; i++) {
        dias += diasNoMes(i, ano);
    }
    dias += dia;
    return dias;
}

//total de dias no ano
int totalDiasAno(int ano) {
    if (ehBissexto(ano))
        return 366;
    else
        return 365;
}

int main() {
    int dia, mes, ano;
    int diasDecorridos, totalDias;
    double porcentagem;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    // dias + dias + dias e dias e dias e dias e dias e dias 
    diasDecorridos = diasDecorridos(dia, mes, ano);
    totalDias = totalDiasAno(ano);

    // %
    porcentagem = (diasDecorridos * 100.0) / totalDias;

    printf("Porcentagem do ano decorrida: %.4f%%\n", porcentagem);

}
