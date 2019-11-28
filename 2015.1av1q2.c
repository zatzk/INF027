#include <stdio.h>
#include <stdlib.h>

main() {
	
	int senha,b0,b1,b2,b3;
	
	printf("insira senha\n");
	scanf("%d", &senha);
	
	b0 = senha%10000/1000;
	b1 = senha%1000/100;
	b2 = senha%100/10;
	b3 = senha%10;
	
	if (senha>9999){
		printf("senha muito longa!");		
	}
	
	else if ((b0 == 0) && (b1 == 0) && (b2 == 0) && (b3 == 0) || (b0 == 1) && (b1 == 1) && (b2 == 1) && (b3 == 1) || (b0 == 2) && (b1 == 2) && (b2 == 2) && (b3 == 2)){
		printf("senha incorreta digitos iguais");
	} 
	else if ((b0 == 3) && (b1 == 3) && (b2 == 3) && (b3 == 3) || (b0 == 4) && (b1 == 4) && (b2 == 4) && (b3 == 4) || (b0 == 5) && (b1 == 5) && (b2 == 5) && (b3 == 5)){
		printf("senha incorreta digitos iguais");
	} 
	else if ((b0 == 6) && (b1 == 6) && (b2 == 6) && (b3 == 6) || (b0 == 7) && (b1 == 7) && (b2 == 7) && (b3 == 7) || (b0 == 8) && (b1 == 8) && (b2 == 8) && (b3 == 8)){
		printf("senha incorreta digitos iguais");
	} 
		else if ((b0 == 9) && (b1 == 9) && (b2 == 9) && (b3 == 9)){
		printf("senha incorreta digitos iguais");
	} 
	
	else if ((b0 == 0) && (b1 == 1) && (b2 == 2) && (b3 == 3) || (b0 == 1) && (b1 == 2) && (b2 == 3) && (b3 == 4) || (b0 == 2) && (b1 == 3) && (b2 == 4) && (b3 == 5)){
		printf("senha incorreta crescente");
	} 
	else if ((b0 == 3) && (b1 == 4) && (b2 == 5) && (b3 == 6) || (b0 == 4) && (b1 == 5) && (b2 == 6) && (b3 == 7) || (b0 == 5) && (b1 == 6) && (b2 == 7) && (b3 == 8)){
		printf("senha incorreta crescente");
	} 
	else if ((b0 == 6) && (b1 == 7) && (b2 == 8) && (b3 == 9)){
		printf("senha incorreta crescente");
	} 
	
	else if ((b0 == 9) && (b1 == 8) && (b2 == 7) && (b3 == 6) || (b0 == 8) && (b1 == 7) && (b2 == 6) && (b3 == 5) || (b0 == 7) && (b1 == 6) && (b2 == 5) && (b3 == 4)){
		printf("senha incorreta decrescente");
	} 
	else if ((b0 == 6) && (b1 == 5) && (b2 == 4) && (b3 == 3) || (b0 == 5) && (b1 == 4) && (b2 == 3) && (b3 == 2) || (b0 == 4) && (b1 == 3) && (b2 == 2) && (b3 == 1)){
		printf("senha incorreta decrescente");
	} 
	else if ((b0 == 3) && (b1 == 2) && (b2 == 1) && (b3 == 0)){
		printf("senha incorreta decrescente");
	} 
	
	else{
		printf("senha valida!");
	}
	return 0;
}
