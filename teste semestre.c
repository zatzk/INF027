#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float p1b1, p2b1;
	float p1b2, p2b2;
	float mediab1, mediab2;
	float mediasem;
	
	printf("informe as notas:\n");
	scanf("%f %f %f %f ", &p1b1, &p2b1, p1b2, p2b2);
	
	mediab1 = (p1b1 + p2b1) / 2;
	mediab2 = (p1b2 + p2b2) / 2;
	mediasem = (mediab1 + mediab2) / 2;
	
	printf("mediasem : %f");
}
