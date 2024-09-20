#include<stdio.h>

#define PI 3.14151692

int main(){

    int raio;
    double perimetro, area;

    printf("Insira o raio do seu circulo: ");
    scanf("%d", &raio);

    perimetro =  2 * PI * raio;
    area = PI * (raio * raio);

    printf("Eis o perimetro: %.2f\n", perimetro);
    printf("Eis a area: %.2f\n", area);

    return 0;
}
