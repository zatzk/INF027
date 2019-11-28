#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float H,S,h,s;
	
	printf("insira altura e sombra da pessoa e sombra do predio:");
	scanf("%f %f %f", &h, &s, &S);
	
	H = (h/s) *S;
	printf ("Altura do predio:\n %f", H);
	
	return 0;
}
