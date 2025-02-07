#include <stdio.h>
 
int main() {
   int quantidade;
   float  N;

   float notas[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
   float moedas[] = {1, 0.500, 0.250, 0.100, 0.050, 0.010};

   scanf("%d", &N);


   printf("NOTAS:\n");
   for (int i = 0; i < 6; i++) {
        quantidade = N / notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i]);
        N -= quantidade * notas[i];
   }
   printf("%f", N);
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        quantidade = N / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i]);
        N -= quantidade * moedas[i];
    }
    return 0;
}
