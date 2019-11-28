#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float area;
	float raio;
	float perimetro;
	
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	system("cls");
	
	printf("valor da area: \n");
	area = pow(raio,2) * 3,14;
	printf("%f \n\n", area);
	
	printf("valor do perimetro: \n");
	perimetro = (2 * 3,14)* raio;
	printf("%f \n", perimetro);
	
	
	return 0;
}
