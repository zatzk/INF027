#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int p1,p2,p3,p4,b1,b2,sem;
	
	printf("Digite as notas das 4 provas:");
	scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
	
	b1 = p1 + p2;
	b2 = p3 + p4;
	sem = (b1+b2)/4;
	
	printf("Media:\n %d", sem);
	return 0;
}
