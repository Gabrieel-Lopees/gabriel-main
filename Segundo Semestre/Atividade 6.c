#include<stdio.h>

int main(){

    int jogadaUm, jogadaDois;

    printf("Vamos jogar pedra papel tesoura! Escolha um (Pedra(1), Papel (2), Tesoura (3): ");
    scanf("%d", &jogadaUm);

    printf("Vamos jogar pedra papel tesoura! Escolha um (Pedra(1), Papel (2), Tesoura (3): ");
    scanf("%d", &jogadaDois);

    if (jogadaDois == jogadaUm){
        printf("Empate!");
    } else if ((jogadaUm == 1 && jogadaDois == 2) ||
              (jogadaUm == 2 && jogadaDois == 3) ||
              (jogadaUm == 3 && jogadaDois == 1)) {
        printf("Jogador #2 venceu!\n \n");
       } else if ((jogadaUm > 3 || jogadaDois > 3 || jogadaUm < 1 || jogadaDois < 1)) {
        printf("Error!");
    }  else {
        printf("Jogador #1 venceu\n \n");
    }
    return 0;
}
