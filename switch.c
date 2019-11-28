#include <stdio.h>
#include <stdlib.h>

int numero;
int main()
{

	printf("Sistemas\n\n");
	printf("1- Ruindous\n");
	printf("2- Archlinux\n");
	printf("3- Disney\n");
	printf("4- Android\n");
	scanf("%d", &numero);
	
	switch(numero)
	{
		case 1:
			printf("inicializando o ruindows\n");
			break;
			
		case 2:
			printf("iniciaoizando archlinux\n");
			break;
		
		case 3:
			printf("inicializando disney channel\n");
			break;
		case 4:
			printf("inicializando android\n");
			break;
			
		default:
			printf("ta errado\n");
	}
	return 0;
}
