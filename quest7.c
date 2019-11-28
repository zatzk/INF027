#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int qd,a,m,d;
	printf("insira a quantidade de dias:");
	scanf("%d", &qd);
	
	a = qd/365;
	m = (qd%365)/30;
	d = (qd%365)%365;
	printf("\n %d anos %d meses e %d dias ", a, m, d);
	
	return 0;
}
