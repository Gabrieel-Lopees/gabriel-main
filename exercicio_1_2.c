#include<stdio.h>
main(){
    float raio, perimetro, area;
    printf ("Digite o valor do raio:\n");
    scanf ("%f", &raio);

    perimetro = (2 * 3.1415) * raio;
    area = 3.1415 * (raio * raio);

    printf("perimetro: %f\n", perimetro);
    printf("area: %f", area);
}
