#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int decimal;
	int bits = 8;
	int vetor [bits];
	int i = bits - 1;
	int j = i;
	
	printf("\nDigite: ");
	scanf("%d", &decimal);
	
	if (decimal>=2){
		
		while(decimal/2 > 0){
			vetor[i] = decimal % 2;
			decimal /= 2;
			i--;
			j--;
		}
		for (i=0; i<j; i++)
			vetor[i] = 0;
		vetor[j] = 1;
		for (i=0; i<bits; i++)
			printf("%2d", vetor[i]);
	}
	
	else if (decimal== 1){
		for(i=0; i<j; i++)
			printf("%2d", vetor[i] = 0);
			
		printf("%2d", vetor[i] = 1);
		
	}
	else if (decimal ==0){
		for (i=0; i<bits; i++)
			printf("%2d", vetor[i] = 0);
		
	}
	
	
	return 0;
}
