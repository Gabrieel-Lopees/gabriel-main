#include<stdio.h>

#define TAM1 4
#define TAM2 6

main(){
    int matriz[TAM1][TAM2];
    int i,

    j=0;
    printf("Digite os valores da matriz: \n");
    for (i = 0; i <TAM1; i++)
        for (j = 0; j < TAM2; j++)
            scanf("%d", &matriz[i][j]);


    printf("Matriz informada: \n");
    for (i = 0; i <TAM1; i++)
        for (j = 0; j < TAM2; j++)
            scanf("%d", &matriz[i][j]);


}
