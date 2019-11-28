#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int base;
	int altura;
	int area;
	
	printf("digite a base\n");
	scanf("%d", &base);
	printf("digite a altura\n");
	scanf("%d", &altura);
	
	area = (base*2) + (altura*2);
	
	printf("%d + %d = %d\n", base, altura, area);
	
	return 0;
}
