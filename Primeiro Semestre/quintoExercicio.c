#include <stdio.h>

int collatz_sequence(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main() {
    int max_length = 0;
    int longest_start = 0;

    for (int i = 10; i <= 200; i++) {
        int current_length = collatz_sequence(i);
        if (current_length > max_length) {
            max_length = current_length;
            longest_start = i;
        }
    }

    printf("Sequência mais longa (tamanho %d) começa com %d:\n", max_length, longest_start);
    int n = longest_start;
    while (n != 1) {
        printf("%d, ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n");

    return 0;
}
