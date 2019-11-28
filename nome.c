#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome [30];
	printf("digite seu nome bla bla: ");
	gets (nome);
	system("cls");
	printf("bem vindo %s\n", nome);
	system("pause");
	return 0;
}
