#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int b, h;
	int a, p;
	printf("insira base e altura:\n");
	scanf("%d %d", &b, &h);
	
	a = b*h;
	p = (b*2) + (h*2);
 	
 	printf("Valor da area:\n %d", a);
 	printf("\nValor do perimetro:\n %d", p);
	return 0;
}
