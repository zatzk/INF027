#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r1, r2, r3;
	int rqparalelo, rqtotal;
	
	printf("Digite o valor da resistencia 1: \n");
	scanf("%d", &r1);
	printf("Digite o valor da resistencia 2: \n");
	scanf("%d", &r2);
	printf("Digite o valor da resistencia 3: \n");
	scanf("%d", &r3);
	
	rqparalelo = (1/r1) + (1/r2);
	
	rqtotal = rqparalelo + r3;
	
	printf("O valor da soma total da resistencia do circuito: \n %d", rqtotal);
}
