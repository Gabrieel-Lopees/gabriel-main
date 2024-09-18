#include<stdio.h>

    struct ponto{
        int x, y;
    };

main(){
    struct ponto p1, p2;
    float dist;
    printf("Digite as coordenadas x e y de dois pontos: ");
    scanf ("%d", &p1.x);
    scanf ("%d", &p1.y);
    scanf ("%d", &p2.x);
    scanf ("%d", &p2.y);
    dist = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}