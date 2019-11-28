#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float ms,km;
	
	printf("Insira Metros por segundos:\n");
	scanf("%f", &ms);
	
	km = ms*3.6;
	printf("\n %.2f Km/h", km);
	return 0;
}
