#include <stdio.h>
#include <stdlib.h>

main() {
	
	int n0,n1,n2, soma;
	printf("digite 3 numeros");
	scanf("%d%d%d", &n0,&n1,&n2);
	
	if ((n0 > n1 && n2) && (n1 > n2)){
		soma = n0 + n1;
		printf("%d", soma);
	}
	else if ((n1 > n0 && n2) && (n2 > n0)){
		soma = n1 + n2;
		printf("%d", soma);
	}			
		else if ((n2 > n0 && n1) && (n1 > n0)){
		soma = n2 + n1;
		printf("%d", soma);
	}
	
	else if ((n0 > n1 && n2) && (n2 > n1)){
		soma = n0 + n1;
		printf("%d", soma);
	}
	else if ((n1 > n0 && n2) && (n0 > n2)){
		soma = n1 + n2;
		printf("%d", soma);
	}			
		else if ((n2 > n0 && n1) && (n0 > n1)){
		soma = n2 + n1;
		printf("%d", soma);
	}
	
	
	return 0;
}
