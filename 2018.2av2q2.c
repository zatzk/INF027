#include <stdio.h>
#include <stdlib.h>

main() {
	
	int senha1, senha2, b5,b4,b3,b2,b1,b0;
	
	printf("Digite sua senha\n");
	printf("Confirme sua senha\n");
	scanf("%d %d", &senha1, &senha2);
	
	b0 = senha2/100000;
	b1 = senha2%100000/10000;
	b2 = senha2%100000%10000/1000;
	b3 = senha2%100000%10000%1000/100;
	b4 = senha2%100000%10000%1000%100/10;
	b5 = senha2%100000%10000%1000%100%10;
	
	if(senha1>9999999){
		printf("Senha muito longa!\n");
	}
	else if(senha1 != senha2){
		printf("Senha incorreta");
	}
	else if ((b1 + b0 == 0) || (b1 +b0 == 1) || (b1 + b0 == 2) && (b1 + b2 == 0) || (b1 + b2 == 1) || (b1 + b2 == 2) && (b2 + b3 == 0) || (b2 + b3 == 1) || (b2 + b3 == 2) && (b3 + b4 == 0) || (b3 + b4 == 1) || (b3 + b4 == 2) && (b4 + b5 == 0) || (b4 + b5 == 1) || (b4 + b5 == 2)){
		printf("Senha incorreta bin");
	}
	
	
	else if (senha1 == senha2){
		printf("Senha correta");
	}
	
	return 0;
}
