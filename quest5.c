#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("digite o valor:");
	scanf("%d", &i);
	
	i = i+1;
	
	printf("valor de sucessor:\n %d", i);
	
	return 0;
}
