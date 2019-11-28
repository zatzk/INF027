#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int l,a,p;
	
	printf("digite o valor do lado do quadrado:\n");
	scanf("%d", &l);
	
	a = (l * 2);
	p = (l * 4);
	
	printf("Valor da area:\n %d", a);
	printf("\nValor do perimetro:\n %d", p);
	return 0;
}
