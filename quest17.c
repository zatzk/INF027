#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	
	int saque=0, nota100=0, nota50=0, nota20, nota10=0, nota5=0, nota2=0;
	
	printf("Digite o valor do saque:");
	scanf("%d", &saque);
	
	nota100 = saque/100;
	saque %= 100;
	nota50 = saque/50;
	saque %= 50;
	nota20 = saque/20;
	saque %= 20;
	nota10 = saque/10;
	saque %= 10;
	nota5 = saque/5;
	saque %= 5;
	nota2 = saque/2;
	saque %= 2;
	
	printf("Notas de 100 => %d\n", nota100);
     printf("Notas de 50  => %d\n", nota50);
     printf("Notas de 20  => %d\n", nota20);
     printf("Notas de 10  => %d\n", nota10);
     printf("Notas de 5   => %d\n", nota5);
     printf("Notas de 2   => %d\n", nota2);
	
	return 0;
}
