#include<stdio.h>

main(){
    int num1, num2, contador, res;
    contador = 0;
    printf("Digite dois valores positivos para serem executados: ");
        scanf("%d" "%d", &num1, &num2);
        res = num2;
    num1--;
    while (contador < num1){
        num2 = num2 + res;
            contador++;
    }
    printf("O produto e: %d", num2);
}
