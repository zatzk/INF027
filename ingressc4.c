#include <stdio.h>
#include <stdlib.h>



int main(void) {
	
	char nome[100];
	int v1[6],i;
	int cpf,x,login1,login2,ingrtot,meia=5,inteira=10;
	int valorint,valormei,quantint,quantmei;
	
	while(x<5){
		for(i=0;i<7;i++){
			v1[i] == cpf;
		}		
		ingrtot = meia + inteira;
		printf("Bem vindo a CCXP!\n");
		printf("Digite: 1, para a compra de ingressos!\n");
		printf("Digite 2, para sair!\n");
		scanf("%d", &login1);
		fflush(stdin);
		
		if(login1==2){
			printf("Programa encerrado!\n");
			return(0);
		}
		if(login1==1){
			printf("Bem vindo a compra de ingressos!\n");
			printf("Atualmente possuimos %d ingressos, sendo %d inteira e %d estudantil!\n\n", ingrtot,inteira,meia);
			printf("Para a compra de ingressos inteiros digite: 1\n");
			printf("Para a compra de ingressos estudantis digite: 2\n");
			scanf("%d", &login2);
			if(login2==1){
				printf("Escolheu ingressos inteiros!\n");
				printf("Informe seu nome:\n");
				scanf("%s", &nome);
				fflush(stdin);
				printf("Pois bem %s, agora informe seu CPF:\n", nome);
				scanf("%d", &cpf);
				fflush(stdin);
				printf("Certo, agora informe quantos ingressos deseja:");
				scanf("%d", &quantint);
				fflush(stdin);
				valorint = quantint*100;
				printf("%s Escolheu %d ingressos totalizando R$%d!\n\n", quantint, valorint);	
			}
			if(login2==2){
				printf("Escolheu ingressos estudantis!\n");
				printf("Informe seu nome:\n");
				scanf("%s", &nome);
				fflush(stdin);
				printf("Pois bem %s, agora informe seu CPF:\n", nome);
				scanf("%d", &cpf);
				fflush(stdin);
				printf("Certo, agora informe quantos ingressos deseja:");
				scanf("%d", &quantmei);
				fflush(stdin);
				if(quantmei<4){
					valormei = quantmei*50;
					printf("%s Escolheu %d ingressos totalizando R$%d!\n\n", quantmei, valormei);
				}
				if(quantmei>3){
					printf("Quantidade de ingressos estudantis excedida por pessoa");
					quantmei=3;
					valormei = quantmei*50;
					printf("%s Escolheu %d ingressos totalizando R$%d!\n\n", quantmei, valormei);
				}
				
			}
			ingrtot = (ingrtot-quantint)-quantmei;
			inteira =- quantint;
			meia =- quantmei;
		}
	x++;	
	}
}
