#include <stdio.h>
#include <stdlib.h>


main() {
	
	int x=0,cpf, meia=10, inteira=10,ingrtot,log,esc,g=0,quantintr,quantmei,quanttot;
	int valint,valmei,valtot,cpfs1,cpfs2,cpfs3;
	char nome[100];
	
	
	
	while(x<10){
		
		ingrtot = meia+inteira;	
		printf("Bem vindo a CCXP!\n");
		printf("Digite 1 para compra de ingressos!\n");
		scanf("%d", &log);
		if(log == 1){
			
			for(x=0;x<10;x++){	
	
				printf("Informe seu nome:\n");
				fflush(stdin);
				gets(nome);
				printf("informe seu CPF:\n");
				scanf("%d", &cpf);
				fflush(stdin);
				if(cpf>99999999999){
					printf("cpf invalido!\n");
					fflush(stdin);
					break;
				}
				
				if(ingrtot==0){
					printf("\nInfelizmente os ingressos acabaram!\n");
					break;
				}
				cpfs2 = cpfs1;
				if(cpf == cpfs1 || cpf == cpfs2 || cpf == cpfs3){
					printf("Compra ja realizada por esta pessoa\n\n");
					break;
				}
				if((cpf>0) && (cpf != cpfs1 || cpf != cpfs2 || cpf != cpfs3)){
					printf("Ola %s, atualmente possuimos %d ingressos totais!\n", nome, ingrtot);
					printf("Possuimos %d ingressos Meia, por: $50\n", meia);
					printf("Possuimos %d ingressos Inteira, por: $100\n", inteira);
					fflush(stdin);
					
					
					g=0;
					while(g<2){
						printf("Digite 1 para comprar inteira\n");
						printf("Digite 2 para comprar meia\n");
						scanf("%d",&esc);
						fflush(stdin);
						if(esc==1){
							printf("escolha quantas inteiras deseja:\n");
							scanf("%d", &quantintr);
							fflush(stdin);
							g++;
						}
						if(esc==2){
							printf("escolha quantas meias deseja:\n");
							scanf("%d", &quantmei);
							fflush(stdin);
							g++;
							if(quantmei>3){
								printf("voce nao pode adquirir mais que 3 meias\n");
							}
						}
					}
					quanttot = quantintr + quantmei;
					valint = quantintr * 100;
					valmei = quantmei *50;
					valtot = valint + valmei;
					printf("Compra realizada, voce adquiriu %d inteiras e %d meias\n", quantintr,quantmei);
					printf("Totalizando %d ingressos no valor de: $%d\n", quanttot, valtot);
				}
				ingrtot = ingrtot - quanttot;
				meia = meia - quantmei;
				inteira = inteira - quantintr;
				printf("\nIngressos totais ainda disponiveis: %d\n", ingrtot);
				printf("Ingressos inteira ainda disponiveis: %d\n", inteira);
				printf("Ingressos meia ainda disponiveis: %d\n", meia);
				if(ingrtot==0){
					printf("\nInfelizmente os ingressos acabaram!\n");
				}
				cpfs1 = cpf;
				cpfs3 = cpfs2;
			}		
		}	
	}
}