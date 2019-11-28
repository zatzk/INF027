#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f,c;
	printf("insira o valor celsius:");
	scanf("%d", &c);
	
	f = (c*9)/5 +32;
	printf("Convertido a fahrenheit:\n %d", f);
	return 0;
}
