#include<stdio.h>

int mdc(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
}


int main()
{
    int num1, num2;
    printf("Insira dois numeros inteiros não nulos para gente saber o maximo divisor comum deles: ");
    scanf("%d %d", &num1, &num2);
    
    int resultado = mdc(num1, num2);
    printf("O maximo divisor comum entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
