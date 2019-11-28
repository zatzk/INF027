#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	
	printf("digite um numero\n");
	scanf("%d", &num);
	
	if (num >= 0){
		printf("numero positivo");
	}
	else{
		printf("numero negativo");
	}
	
	return 0;
}
