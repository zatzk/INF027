#include <stdio.h>
#include <stdlib.h>


main() {
	
	float A;
	float B;
	float cont;
	
	A = 5000000;
	B = 7000000;
	cont = 0;
	
	while (A < B)
	{
		A = A*1.03;
		B = B*1.02;
		cont = cont +1;
		
	}
	printf(" Valor em anos:\n %.2f", cont);
	
	return 0;
}
