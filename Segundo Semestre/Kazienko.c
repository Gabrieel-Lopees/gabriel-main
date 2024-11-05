#include<stdio.h>
/*
int main (void) {
	int x = 112;
	printf("%d %x %u %c %o\n", x, x, x, x, x);
	return 0;
}
*/

int main (){
	int num = 112;

	for (int i = 32; i <= 126; i++){
		printf("Decimal: %d \t caractere: %c\n", i, i);
	}
	
	printf("\n Decimal: %d \t caractere: %c\n", num, num);

	return 0;
}

