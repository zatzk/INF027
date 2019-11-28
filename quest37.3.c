#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tipo;
	float area, valor;
	
	printf("Informe um tipo de pulverizacao:\n");
	scanf("%d", &tipo);
	printf("Informe a quantidade de acres:\n");
	scanf("%f", &area);
	
	switch(tipo){
		
		case 1: if(area<=1000){
			valor = 50*area;
			if(valor>750){
				valor=750+(valor-750)*0.1;
				printf("Valor: %f.4f reais", valor);
			}else
			printf("Valor: %f.2f reais", valor);
		}
				if(area>1000){
					valor=(50*area)*0.05;
					if(valor>750){
						valor=750(valor-750)*0.1;
						printf("Valor: %f.2f reais", valor);
					}else
						printf("Valor: %f.2f reais", valor);
				};break;
		
	}
	return 0;
}
