#include <stdio.h>
#define MAXLINHA 1000

int lelinha(char linha[], int maxlinha);
void copia(char para[], char de[]);

int main() {
    int tam;
    int max = 0;
    char linha[MAXLINHA];
    char maior[MAXLINHA];

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        if (tam > max) {
            max = tam;
            copia(maior, linha);
        }
    }

    if (max > 0) {
        printf("%s", maior);
    }

    return 0;
}

int lelinha(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copia(char para[], char de[]) {
    int i = 0;
    while ((para[i] = de[i]) != '\0')
        ++i;
}
