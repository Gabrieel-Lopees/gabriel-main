#include<stdio.h>

int main() {
   double N;
   scanf("%f", &N);
   
   if (N <= 25 && N >= 0) {
       printf("intervalo [0,25]\n");
   } else if (50 >= N && N > 25) {
       printf("intervalo (25,50]");
   } else if (75 >= N && N > 50) {
       printf("intervalo (50,75]");
   } else if (100 >= N && N > 75) {
       printf("intervalo (75,100]");
   } else if (N > 100 && N <= 1) {
       printf("Fora de intervalo");
   } else {
       printf("Fora de intervalo");
   }

}
