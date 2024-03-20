#include<stdio.h>
#define PI 3.1415
main(){
    float raio, perimetro, area;
    printf ("Digite o valor do raio:\n");
    scanf ("%f", &raio);

    perimetro = (2 * PI) * raio;
    area = PI * (raio * raio);

    printf("perimetro: %f\n", perimetro);
    printf("area: %f", area);
}
