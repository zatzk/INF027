#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,a,p;
	printf("valor do raio:");
	scanf("%d", &r);
	a = r*2;
	p = (2*3,14)*r;
	printf("Valor da area:\n %d", a);
	printf("\nValor do perimetro:\n %d", p);
	
	return 0;
}
