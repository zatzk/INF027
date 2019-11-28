#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int inteiro;
	int resultado;
	printf("Insira o valor do inteiro a crescente: \n");
	scanf("%d", &inteiro);
	
	resultado = ++inteiro;
	
	
	printf("resultado:\n\n %d ", resultado);
	return 0;
}
