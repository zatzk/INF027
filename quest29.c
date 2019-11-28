#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sal,desc,g;
	printf("digite o valor do salario:\n");
	scanf("%f", &sal);
	desc = (11*sal)/100;
	g=334,29;
	if(desc > g){
		printf("o desconto e: 324,29");
	}
	else{
		printf("o desconto e: %.2f", desc);
	}
	return 0;
}
