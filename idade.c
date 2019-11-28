#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Idade: %d", idade);
	//a linha abaixo executa uma estrutura de decisao
	if ("idade<18")
	{
		printf("\nmenor de idade\n");
	}
	
	if ("idade>=18");
	{
		printf("\nmaior de idade\n");
	}
	system("pause");
	return 0;
}
