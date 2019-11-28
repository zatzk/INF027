#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n,j,soma,s1,s2,s3;
	int vetor[7] = {-2 ,5 ,-1 ,8 ,-11 ,7 ,3};
	
	for(n=0; n<7; n++){
		printf("sala [%d] = %d", n, vetor[n]);
		printf("\n");
	}
	
	printf("Escolha a sala na qual joaozinho ira entrar:");
	scanf("%d", &j);
	n=j;
	s1 = vetor[n];
	n++;
	s2 =+ vetor[n];
	n++;
	s3 =+ vetor[n];
	soma = s1+s2+s3;
		printf("%d", soma);
}
