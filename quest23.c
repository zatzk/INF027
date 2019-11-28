#include <stdio.h>
#include <stdlib.h>


main() {
	
	int num;
	printf("digite um numero\n");
	scanf("%d", &num);
	
	num = num%2;
	
	if (num == 0){
		printf("par\n");
	}
	else{
		printf("impar\n");
	}
	return 0;
}
