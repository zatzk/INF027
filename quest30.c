#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float g,a,l,va,vg,da,dg,ga;
	int c;
	va=1,90;
	vg=2,70;
	printf("Digite 1 para alcool ou 2 para gasolina\n");
	scanf("%d", &c);
	switch(c){
		case 1:{
			printf(" agora escolha quantos litros de alcool deseja\n");
			scanf("%f", &a);
			fflush(stdin);
			va = va*a;
			if(a<=25){
				da = (2*va)/100;
				printf("Valor a pagar %.2f e desconto de %.2f total: %.2f", va,da, va-da);
			}
			if(a>25){
				da = (4*va)/100;
				printf("Valor a pagar %.2f e desconto de %.2f total: %.2f", va,da, va-da);
			}
			break;
		}
		case 2:{
			printf(" agora escolha quantos litros de gasolina deseja\n");
			scanf("%f", &g);
			fflush(stdin);
			vg = vg*g;
			if(g<=25){
				dg = (3*vg)/100;
				printf("Valor a pagar %.2f e desconto de %.2f total: %.2f", vg,dg, vg-dg);
			}
			if(g>25){
				dg = (5*vg)/100;
				printf("Valor a pagar %.2f e desconto de %.2f total: %.2f", vg,dg, vg-dg);
			}
			break;
		}
	}
	
	return 0;
}
