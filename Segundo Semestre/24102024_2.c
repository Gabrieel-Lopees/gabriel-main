#include <stdio.h>

void exibirCpfFormatado(const char *cpf) {
    printf("CPF formatado: %c%c%c.%c%c%c.%c%c%c-%c%c\n", 
           cpf[0], cpf[1], cpf[2], 
           cpf[3], cpf[4], cpf[5], 
           cpf[6], cpf[7], cpf[8], 
           cpf[9], cpf[10]);
}

int main() {
    char cpf[12]; // Tamanho para 11 dígitos + '\0'

    printf("Digite o CPF (somente números, 11 dígitos): ");
    scanf("%11s", cpf); // Lê até 11 dígitos

    exibirCpfFormatado(cpf);
    
    return 0;
}
