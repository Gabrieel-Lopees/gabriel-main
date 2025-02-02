#include<stdio.h>

/* Beecrowdzudo */

int main() {
   int time;
   int speed;
   float liters;
   float distance;

   scanf("%d", &time);
   scanf("%d", &speed);

   distance = speed * time;
   liters = distance/12;

   printf("%.3f", liters);

}
