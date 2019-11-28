#include <stdio.h>
#include <stdlib.h>

main() {
	
	int num;
	printf("digite um numero equivalente a um mes");
	scanf("%d", &num);
	switch(num){
		case 1: printf("31 dias"); break;
		case 2: printf("28 dias"); break;
		case 3: printf("31 dias"); break;
		case 4: printf("30 dias"); break;
		case 5: printf("31 dias"); break;
		case 6: printf("30 dias"); break;
		case 7: printf("31 dias"); break;
		case 8: printf("31 dias"); break;
		case 9: printf("30 dias"); break;
		case 10: printf("31 dias"); break;
		case 11: printf("30 dias"); break;
		case 12: printf("31 dias"); break;
		
	}
	return 0;
}
