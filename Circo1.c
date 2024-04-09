#include<stdio.h>

// abaixo de 12 anos e acima de 60 é gratis 

main(){
    int idade;
        printf("Quantos anos voce tem?: ");
        scanf("%d", &idade);

    if(idade < 12 || idade > 60) {
        printf("entrada gratuita!!!!!!!");
    }

    else {
        printf("voce precisa pagar!!!");
    }

}
