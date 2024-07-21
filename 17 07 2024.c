#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // Comprimento da string
    int len = strlen(str1);
    printf("Comprimento de str1: %d\n", len);

    // Copiar string
    strcpy(str3, str1);
    printf("str3 após strcpy: %s\n", str3);

    // Concatenar strings
    strcat(str3, str2);
    printf("str3 após strcat: %s\n", str3);

    // Comparar strings
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }

    return 0;
}
