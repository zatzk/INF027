#include <iostream>

/* quem tá lendo é viado */

main() {
	
	int dias;
	int idade_anos;
	int idade_meses;
	int idade_dias;
	
	printf("Informe sua idade em dias: \n");
	scanf("%d", &dias);
	
	idade_anos = dias/365;
	idade_meses = (dias % 365)/30;
	idade_dias = (dias / 365)%30;
	
	printf("Anos: %d\n", idade_anos);
	printf("Meses: %d\n", idade_meses);
	printf("Dias: %d\n", idade_dias);
	
	
	return 0;
}
