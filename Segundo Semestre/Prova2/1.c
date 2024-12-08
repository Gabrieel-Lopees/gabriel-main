#include<stdio.h>
    
int main() 
{
    int valores[7] = {10, 20, 30, 40, 50, 60, 70,};
    printf("Elementos:\n");
    for (int i = 0; i < 7; i++) {
        printf("Valores[%d]: %d\n", i, valores[i]);
    }
}

