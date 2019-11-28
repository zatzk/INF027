#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letra;
	printf("digite uma letra");
	scanf("%c", &letra);
	if(letra == 'a'||letra =='e'||letra =='i'||letra =='o'||letra =='u'){
		printf("voce digitou uma vogal");
	}
	else{
		printf("voce digitou uma consoante");
	}
	return 0;
}
