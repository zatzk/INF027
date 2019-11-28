#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v, r, h;
	printf("de o raio e a altura:");
	scanf("%d %d", &r, &h);
	
	v = (3,14*(r*2))*h;
	printf("valor do volume igual:\n %d", v);
	return 0;
}
