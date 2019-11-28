#include <stdio.h>
#include <stdlib.h>



int main(void) {
	char nome[100];
	int m,n,i,j,cpf,x;
	int g,meia=10, inteira=10,ingrtot,esc,quantintr,quantmei,quanttot,valint,valmei,valtot;

	int matrizA[3][3];
	int matrizB[3][3];
	
	do{
		ingrtot=meia+inteira;
		printf("digite seu nome:\n");
		gets(nome);
		fflush(stdin);
		printf("Digite o CPF:\n");
		scanf("%d", &cpf); // vai salvar o cpf
		if(cpf==matrizB[i][j]){ //vai verificar se o cpf é igual a algum ja salvo anteriormente, apos o primeiro loop
			printf("CPF ja cadastrado!\n");
			return(0);
		}
	
		else{
			printf("Ola %s, atualmente possuimos %d ingressos totais!\n", nome, ingrtot);
			printf("Possuimos %d ingressos Meia, por: $50\n", meia);
			printf("Possuimos %d ingressos Inteira, por: $100\n", inteira);
			for(m=0; m<3;m++){
				for(n=0;n<3;n++){
					matrizA[m][n] = cpf; // trasferir o valor do cpf pro array e mover para o seguinte
					matrizB[i][j] = matrizA[m][n]; // transfere o valor da matriz A para a matriz B
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
								return(0);
							}
						}
					}
					quanttot = quantintr + quantmei;
					valint = quantintr * 100;
					valmei = quantmei *50;
					valtot = valint + valmei;
					printf("Compra realizada, voce adquiriu %d inteiras e %d meias\n", quantintr,quantmei);
					printf("Totalizando %d ingressos no valor de: $%d\n", quanttot, valtot);
					
					
					
					ingrtot = ingrtot - quanttot;
					meia = meia - quantmei;
					inteira = inteira - quantintr;
					printf("\nIngressos totais ainda disponiveis: %d\n", ingrtot);
					printf("Ingressos inteira ainda disponiveis: %d\n", inteira);
					printf("Ingressos meia ainda disponiveis: %d\n", meia);
					
					if(ingrtot==0){
						printf("\nInfelizmente os ingressos acabaram!\n");
						return(0);
					}
				}
			}
		}
	}while(x<5);
	x++;
}
