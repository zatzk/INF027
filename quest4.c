#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l,p;
	printf("insira o valor dos lados do triangulo:");
	scanf("%d", &l);
	
	p = l*3;
	printf("O valor do perimetro:\n %d", p);
	
}
