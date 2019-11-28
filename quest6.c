#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, resto, quo;
	printf("digite os valores inteiros:");
	scanf("%d %d", &num1, &num2);
	quo = num1/num2;
	resto = num1
	%num2;
	printf("Valor do quonciente: \n%d", quo);
	printf("\nValor do resto: \n %d", resto);
	
	return 0;
}
