#include<stdio.h>

/* Beecrowdzudo */

int main() {
   int idadeDias;
   int ano, mes, dia;
   scanf("%d", &idadeDias);

   ano = idadeDias / 365;
   idadeDias %= 365;
   mes = idadeDias / 30;
   idadeDias %= 30;


   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, idadeDias);
}
