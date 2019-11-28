#include <stdio.h>
#include <stdlib.h>

int main()
{
	int decimal;
	int binario;
	int b4, b3, b2, b1, b0;
	
	printf("Informe um valor entre 0--32\n");
	scanf("%d", &decimal);
	
	b0 = decimal%2;
	decimal = decimal /2;
	b1 = decimal%2;
	decimal = decimal /2;
	b2 = decimal%2;
	decimal = decimal /2;
	b3 = decimal%2;
	b4 = decimal /2;
	
	binario = b4*10000 + b3 * 1000 + b2 * 100 + b1 *10 + b0;
	 printf("%d", binario);
}
