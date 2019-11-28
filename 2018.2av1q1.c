#include <stdio.h>
#include <stdlib.h>

main() {
	
	int num,tot, bin, b0,b1,b2,b3,b4;
	
	printf("insira inteiro entre 0 --31:\n");
	scanf("%d",&num);
	b0 = num%2;
	num = num/2;
	b1 = num%2;
	num = num/2;
	b2 = num%2;
	num = num/2;
	b3 = num%2; 
	b4 = num/2;
	
	bin= b4*10000 + b3 * 1000 + b2 * 100 + b1 * 10 + b0; 
	printf ("\n%d\n", bin);
	tot = b4 + b3 + b2+ b1 +b0;
	printf("\ntotal de:%d digitos 1", tot);
	
	
	return 0;
}
