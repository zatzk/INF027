#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float tp,area,descarea,descvalor,valor;
	char praga;
	
	printf("Tipo A - Ervas daninha - 50 reais por acre:\n");
	printf("Tipo B - Gafanhotos - 100 reais por acre:\n");
	printf("Tipo C - Broca - 150 reais por acre:\n");
	printf("Tipo D - Todos acima - 250 reais por acre:\n");
	printf("Selecione um dos tipos citados:\n");
	scanf("%c", &praga);
	printf("Informe a area desejada para pulverizacao:\n");
	scanf("%f", &area);
	
	
	
	if ((praga=='a')&&(area<=1000)){
		valor = 50*area;
		if ((praga=='a')&&(area>1000)){
			valor = 50*area;
			descarea = valor /0.95;
			valor = +valor - descarea;
			if(valor>750){
				descvalor = valor /0.90;
				valor = +valor -descvalor;
				printf("Valor:\n %.4f reais", valor);
			}
			
		}
		
	}
	if ((praga=='b')&&(area<=1000)){
		valor = 100*area;
		if ((praga=='b')&&(area>1000)){
			valor = 100*area;
			descarea = valor /0.95;
			valor = +valor - descarea;
			if(valor>750){
				descvalor = valor /0.90;
				valor = +valor -descvalor;
				printf("Valor:\n %.4f reais", valor);
			}
			
		}
		
	}
	if ((praga=='c')&&(area<=1000)){
		valor = 150*area;
		if ((praga=='c')&&(area>1000)){
			valor = 150*area;
			descarea = valor /0.95;
			valor = +valor - descarea;
			if(valor>750){
				descvalor = valor /0.90;
				valor = +valor -descvalor;
				printf("Valor:\n %.4f reais", valor);
			}
			
		}
		
	}
	if ((praga=='d')&&(area<=1000)){
		valor = 250*area;
		if ((praga=='d')&&(area>1000)){
			valor = 250*area;
			descarea = valor /0.95;
			valor = +valor - descarea;
			if(valor>750){
				descvalor = valor /0.90;
				valor = +valor -descvalor;
				printf("Valor:\n %.4f reais", valor);
			}
			
		}
		
	}
}
