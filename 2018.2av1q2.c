#include <stdio.h>
#include <stdlib.h>

main() {
	
	int num, aux, soma, n0, n1, n2, n3, div;
	printf("insira numero de 0 a 999\n");
	scanf("%d", &num);
	aux = num;
	n0 = num%7;
	num = num/7;
	n1 = num%7;
	num = num/7;
	n2 = num%7;
	num = num/7;
	n3 = num%7;
	
	printf("base 7: %d%d%d%d\n",n3, n2, n1, n0);
	soma = n0+n1+n2+n3;
	printf ("algarismos somados = %d\n", soma);
	div = soma%7;
	printf("resto da divisao de %d por 7 = %d\n", soma, div);
	printf("DV: %d%d", aux, div);
	return 0;
}
