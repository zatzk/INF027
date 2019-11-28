#include <stdio.h>
#include <stdlib.h>


main() {
	
	int n0,n1,n2;
	printf("digite tres numeros");
	scanf("%d%d%d", &n0,&n1,&n2);
	
	if ((n0 > n1) && (n0 > n2)){
		printf("o numero maior: %d", n0);
	}
	else if ((n1 > n0) && (n1 > n2)){
		printf(" o numero maior: %d", n1);
	}
	else if ((n2 > n0) && (n2 > n1)){
		printf("o numero maior: %d", n2);
	}
	return 0;
}
