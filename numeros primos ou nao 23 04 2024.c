#include<stdio.h>

main(){
    int n, div;
    printf("Digite o valor inteiro: ");
    scaf("%d", &n);
    
    for(div=n/2; div > 1 && n%div!=0; div--){
        if(div == 1)
            printf("NAO, o numero informado nao eh primo.");
        if(ePrimo){
            printf("SIM, o numero informado eh primo.");
        }   
        else{
            printf("NAO, o numero informado nao eh primo.");
        }
    }