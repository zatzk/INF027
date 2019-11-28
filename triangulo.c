#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	int soma;
	
	printf("Digite os valores do triangulo: \n\n");
	scanf ("%d %d %d", &a, &b, &c);
	
	soma = (a + b + c)*2;
	
	printf("O resultado final: \n %d", soma);
	
	return 0;
}
