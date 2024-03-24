#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float salario, reajuste, salarioReajuste;
    printf ("digite seu salario:\n");
    scanf ("%f", &salario);

    printf ("digite o seu percentual de reajuste: ");
    scanf ("%f", &reajuste);

    salarioReajuste = salario + (salario *(reajuste / 100));

    printf ("Seu Salario após o reajuste é:R$ %.2f\n", salarioReajuste);

    return 0;
}

