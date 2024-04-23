#include<stdio.h>

main(){
    int n, soma=0;
    printf("Digite o valor inteiro: ");
    scanf("%d", &n);
    while(n >= 10) {
        soma = soma + (n % 10);
        n = n / 10;
    }
    soma = soma + n;
    printf("A Soma dos digitos do valor lido e %d", soma);
}
