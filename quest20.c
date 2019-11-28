#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valor, entr, p1, p2, aux;
	printf("Entre com o valor do produto:\n");
	scanf("%f", &valor);
	
	aux = valor/3;
	entr = aux+16;
	p1 = aux - 8;
	p2 = aux - 8;
	printf("\n Entrada: %.2f\n Prestacao 1: %.2f\n Prestacao 2: %.2f \n", entr, p1, p2);
	
	return 0;
}
