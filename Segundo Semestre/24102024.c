#include<stdio.h>
 
/* be quiet and drive */

int main ()
{

int x, y;
	printf("Insira o valor que será contado: ");
		scanf("%d", &y);

	printf("Insira até aonde ele será contado: ");
		scanf("%d", &x);

	for (int i = y; i <= x; i++) {
		printf("Contagem: %d\n", i);	
		}

	return 0;
}

