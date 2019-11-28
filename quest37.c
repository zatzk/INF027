#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float tp,acre,descacr,desctot,tot;
	
	printf("Defina o tipo de pulverização entre 1--4 e acres:\n");
	scanf("%f %f", &tp, &acre);
	
	if (tp=1)
	{
		tp = 50*acre;
	}
	if (tp=2)
	{
		tp = 100*acre;
	}
	if (tp=3)
	{
		tp = 150*acre;
	}
	if (tp=4)
	{
		tp = 250*acre;
	}
	if (acre>1000)
	{
		descacr = acre/0.95;
	}
	tot = +tp - descacr;
	if (tot>750)
	{
		desctot = tot/0.90;
	}
	tot = +tot - desctot;
	printf("Valor total:\n %f", tot);
	
	
	return 0;
}
