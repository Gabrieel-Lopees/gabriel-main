#include<stdio.h>
#define VALOR 9

int main()
{
	int valores[VALOR] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printf("Os elementos do vetor sao:\n");
	for (int i = 0; i < VALOR; i++) {
		printf("valores[%d] = %d\n", i, valores[i]);
	}

	return 0;
}
