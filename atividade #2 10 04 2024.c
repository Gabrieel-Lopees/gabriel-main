#include<stdio.h>
#include <locale.h>


main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, product = 0;

        printf("Digite dois valores que deseja realizar a operação: ");
        scanf("%d %d", &num1, &num2);

    while (num1 >= num2){
        num1 = num1 - num2;
        product++;
    }

    printf("O Resultado da divisao é: %d", product);
}