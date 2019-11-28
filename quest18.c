#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, aux;
	
	printf ("digite valor a serem permutados:\n");
	scanf("%d %d", &a, &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf ("A = %d\nB = %d\n", a, b);
	return 0;
}
