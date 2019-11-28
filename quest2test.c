#include <stdlib.h>
#include <stdio.h>

int lado, area;

int main()
{
        //Ler Lado

	printf("Insira o Lado: ");
	scanf("%d", &lado);

        //Calculo da Área

	area = (lado * lado);

	printf("A área e: %d \n", area);

	system("PAUSE");
}
