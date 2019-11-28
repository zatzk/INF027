#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c, d, u, num;
	printf("insira numero de 3 digitos:\n");
	scanf("%d", &num);
	c = num/100;
	d = (num%100) /10;
	u = num%10;
	printf("O numero informado invertido fica:\n %d%d%d", u,d,c);
	
	return 0;
}
