#include <stdio.h>
#include <stdlib.h>


void main() {
	
	int i,aux,num;
	int v[7];
	
	printf("Digite o numero a ser convertido\n");
	scanf("%d", &num);
	
	for(i=0;i<7;i++){
		v[i] = num%2;
		num=num/2;
	}
	for(i=0;i<7;i++){
		printf("%d", v[i]);
	}
}
