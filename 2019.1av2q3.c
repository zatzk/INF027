#include <stdio.h>
#include <stdlib.h>



void main() {
	int i,x,contesp=0,contnum=0,contmin=0,contmax=0,contsen;
	
	char vetesp[5] = {'@','!','$','%','#'};
	char vetnum[10] = {'0','1','2','3','4','5','6','7','8','9'};
	char vetmin[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char vetmax[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char vetsen[8], vetconf[8];
	
	
	printf("Digite uma senha de 8 caracteres\n");
	printf("A senha deve conter caracteres maiusculos (A-Z)\n");
	printf("A senha deve conter caracteres minusculos (a-z)\n");
	printf("A senha deve conter no minimo 2 numeros (0-9)\n");
	printf("A senha deve conter no minimo 2 simbolos (@,%,$,!,#)\n");
	
	//captura da senha
	for(i=0;i<8;i++){
		scanf("%c", &vetsen[i]);
	}
	//contador de caractere especial
	for(i=0;i<8;i++){
		for(x=0;x<8;x++){
			if(vetsen[i]==vetesp[x]){
				contesp++;
			}
		}
	}
	//contador numeral
	for(i=0;i<8;i++){
		for(x=0;x<10;x++){
			if(vetsen[i]==vetnum[x]){
				contnum++;
			}
		}
	}
	
	if((contesp>1) && (contnum>1)){
		printf("Senha valida!\nConfirme a senha:\n");
		fflush(stdin);
		//captura da confirmacao da senha
		for(x=0;x<8;x++){
			scanf(" %c", &vetconf[x]);
		}
		//comparacao das senhas
		for(i=0;i<8;i++){
			for(x=0;x<8;x++){
				if(vetsen[i]==vetconf[x]){
					contsen++;
				}
			}
		}
		
		if((contsen=8) && (contesp>1) && (contnum>1)){
			printf("Senha Confirmada!");
		}
		else{
			printf("Erro!");
		}
	}
	else{
		printf("Senha invalida!");
	}
	
}

