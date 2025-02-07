#include<stdio.h>

int main() {
   float N;
   scanf("%f", &N);
   
   if (N <= 25 && N >= 0) {
       printf("intervalo [0,25]\n");
   } else if (50.0000000 > N && N > 25.0000000) {
       printf("intervalo (25,50]");
   } else if (75.0000000 > N && N > 50.0000000) {
       printf("intervalo (50,75]");
   } else if (100.0000000 >= N && N > 75.0000000) {
       printf("intervalo (75,100]");
   } else if (N <= 1)
       printf("Fora de intervalo");
}
