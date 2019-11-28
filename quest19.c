#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a1, b1, c1, a2, b2, c2, x1, x2, s1, s2;
	
	printf("Principio aditivo da igualdade\n\n");
	printf("f(x) = ax + b = c\n\n");
    printf("a1 = "); scanf("%d", &a1);
    printf("b1 = "); scanf("%d", &b1);
    printf("c1 = "); scanf("%d", &c1);
    
	x1 = c1 - b1;
	s1 = x1 / a1;
    
    printf("f(x) = ax - b = c\n\n");
    printf("a2 = "); scanf("%d", &a2);
    printf("b2 = "); scanf("%d", &b2);
    printf("c2 = "); scanf("%d", &c2);
    
    x2 = c2 + b2;
    s2 = x2 / b2;
    
    if (s1 = s2)
    {
    	printf("raiz de %d e %d equivalentes", s1, s2);
	}
	else
		printf("raiz de %d e %d nao equivalentes", s1, s2);
    
	return 0;
}
