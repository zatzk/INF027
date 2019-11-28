#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5E");
	printf("Olá mundo\n");
	system("pause");
	
	system("cls");
	system("color F0");
	printf("pão de queijo\n");
	system("pause");
	return 0;
}
