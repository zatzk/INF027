#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, b0, b1, b2, b3, b4, bin;
	
	printf("valor decimal menor q 32:");
	scanf("%d", &num);
	
	b0 = num%2;
	num = num/2;
	b1 = num%2;
	num = num/2;
	b2 = num%2;
	num = num/2;
	b3 = num%2;
	b4 = num/2;
	
	bin = b4*10000 + b3*1000 + b2*100 + b1*10 + b0;
	printf("valor binario:\n %d", bin);
	
	return 0;
}
