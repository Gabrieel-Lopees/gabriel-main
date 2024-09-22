#include <stdio.h>
#define PI 3.14159
int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double areaTriangulo = (A * C) / 2.0;


    double areaCirculo = PI * C * C;

    double areaTrapezio = ((A + B) * C) / 2.0;

    double areaQuadrado = B * B;

    double areaRetangulo = A * B;

    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETARDADO: %.3lf\n", areaRetangulo);

    return 0;
}
