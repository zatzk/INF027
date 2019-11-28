#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct{
	char nome[20],cpf[14], sexo[10],rg[14],idade[2];
	int ativo, atual, conta;
	
}Boate;
Boate jovens[MAX];

typedef struct{
	int cont_a,cont_p,cont_v,cont_w,cont_g;
	int ap,pp,vp,wp,gp;
}Bar;
Bar produtos[MAX];

void menu();
void cadastrar();
void consumir();
void consultar();

int main(){
	
	menu();
	
}

void menu(){
	int op;
	do{
		system("cls");
		printf("\n1 - Cadastrar\n2 - Consumir\n3 - Consultar\n0 - Sair\n");
		scanf("%d", &op);
		getchar();
		switch(op){
			case 1:
				cadastrar();
			break;
			case 2: consumir();
			break;
			case 3: consultar();
			break;
		}
		getchar();
	}while(op!=0);
}

void cadastrar(){
	system("cls");
	char nome[20],cpf[14],idade[2];
	int op,i, dia, mes, ano,idp,atual,sex, conta = 0;
	do{
		printf("----------------------Cadastro----------------------");
		fflush(stdin);
		printf("\nNome: ");
		fgets(nome, sizeof(nome), stdin);
		printf("\nCPF: ");
		getchar();
		fgets(cpf, sizeof(cpf), stdin);
		printf("\n-------------------------Idade------------------------\n");
		printf("\nInsira dia: ");
		getchar();
		scanf("%d,", &dia);
		printf("\nInsira mes: ");
		scanf("%d,", &mes);
		printf("\nInsira ano: ");
		scanf("%d,", &ano);
		mes = mes*30;
		atual = ano;
		ano = ano*365;
		idp = dia+mes+ano;
		atual = 2019 - atual;
		if(idp>730865){
			printf("\nIdade abaixo da permitida!");
			printf("\n0 - Sair\n");
			scanf("%d", &op);
			system("cls");	
		}
		if(idp<730865){
			printf("\nSexo:\n1 - Para masculino\n2- Para feminino\n");
			scanf("%d", &sex);
			
			if(sex==1){
				printf("masculino\n");
				printf("\nA entrada custa 100R$, deseja realizar o pagamento?\n");
				printf("\n1 - Continuar\n0 - Sair\n");
				scanf("%d", &op);
				if(op==1){
					printf("\nInsira quantos pretende gastar\n(Sera descontada a entrada)\n");
					scanf("%d", &conta);
					conta = conta -100;
					for(i = 0; i < MAX; i++){
						if(jovens[i].ativo == 0){
						strcpy (jovens[i].cpf, cpf);
						strcpy(jovens[i].nome, nome);
						strcpy(jovens[i].sexo, "masculino");
						jovens[i].conta=conta;
						jovens[i].ativo=1;
						jovens[i].atual=atual;
						break;
						}
					}		
				}	
			}
			if(sex==2){
				printf("feminino\n");
				printf("\nA entrada custa 50R$, deseja realizar o pagamento?\n");
				printf("\n1 - Continuar\n0 - Sair\n");
				scanf("%d", &op);
				if(op==1){
					printf("\nInsira quantos pretende gastar\n(Sera descontada a entrada)\n");
					scanf("%d", &conta);
					conta = conta -50;
					for(i = 0; i < MAX; i++){
						if(jovens[i].ativo == 0){
						strcpy (jovens[i].cpf, cpf);
						strcpy(jovens[i].nome, nome);
						strcpy(jovens[i].sexo, "feminino");
						jovens[i].conta=conta;
						jovens[i].ativo=1;
						jovens[i].atual=atual;
						break;
						}
					}		
				}	
			}				
		}
		printf("\n1 - Realizar outro cadastro\n0 - Sair\n");
		scanf("%d", &op);
	}while(op!=0);
}

void consumir(){
	system("cls");
	char nome[20], cpf[14];
	int op,consumo=0,i,cont=0;
	int cont_a=0,cont_p=0,cont_v=0,cont_w=0,cont_g=0, ap=0,pp=0,vp=0,wp=0,gp=0;
	printf("CPF: ");
	getchar();
	fgets(cpf, sizeof(cpf), stdin);
	for(i=0;i<MAX;i++){
		if(strstr(jovens[i].cpf, cpf)!=NULL){
			printf("Pois bem %s digite 1 para consumir, 0 para sair\n", jovens[i].nome);
			scanf("%d", &op);
			do{
				printf("\n1-Agua R$5,00\n2-Pizza R$10,00\n3-Vodka R$50,00\n4-Whiskey R$100,00\n5-Gin R$25,00\n6-Sair\n");
				scanf("%d", &cont);
				switch(cont){
					case 1: {
						consumo = consumo +5;
						printf("\n>>Agua R$5,00<<\n");
						printf("%d", consumo);
						cont_a++;
						ap=ap+5;
						break;
					}
					case 2:{
						consumo = consumo +10;
						printf("\n>>Pizza R$10,00<<\n");
						printf("%d", consumo);
						cont_p++;
						pp=pp+10;
						break;
					}
					case 3:{
						consumo = consumo +50;
						printf("\n>>Vodka R$50,00<<\n");
						printf("%d", consumo);
						cont_v++;
						vp=vp+50;
						break;
					}
					case 4:{
						consumo = consumo +100;
						printf("\n>>Whiskey R$100,00<<\n");
						printf("%d", consumo);
						cont_w++;
						wp=wp+100;
						break;
					}
					case 5:{
						consumo = consumo +25;
						printf("\n>>nGin R$25,00<<\n");
						printf("%d", consumo);
						cont_g++;
						gp=gp+25;
						break;
					}	
					case 6:{
						printf("Saindo...");
						printf("%d", consumo);
						op = 0;
						break;
					}
				}
			}while(op!=0);	
			jovens[i].conta = jovens[i].conta - consumo;	
			produtos[i].cont_a = cont_a; produtos[i].ap = ap;
			produtos[i].cont_p = cont_p; produtos[i].pp = pp;
			produtos[i].cont_v = cont_v; produtos[i].vp = vp;
			produtos[i].cont_w = cont_w; produtos[i].wp = wp;
			produtos[i].cont_g = cont_g; produtos[i].gp = gp;
		}	
	}
}

void consultar(){
	int i;
	system("cls");
	printf("\n---LISTA DE CONSUMO---\n");
	for(i = 0; i < MAX; i++){
		if(jovens[i].ativo==1){
			printf("\nNome: %s\n", jovens[i].nome);
			printf("CPF: %s\n", jovens[i].cpf);
			printf("Sexo: %s\n", jovens[i].sexo);
			printf("\nConta: %d\n", jovens[i].conta);
			if(produtos[i].cont_a!=0){
				printf("\nConsumiu %d agua no total de R$%d\n", produtos[i].cont_a, produtos[i].ap);
			}
			if(produtos[i].cont_p!=0){
				printf("\nConsumiu %d pizza no total de R$%d\n", produtos[i].cont_p, produtos[i].pp);
			}
			if(produtos[i].cont_v!=0){
				printf("\nConsumiu %d vodka no total de R$%d\n", produtos[i].cont_v, produtos[i].vp);
			}
			if(produtos[i].cont_w!=0){
				printf("\nConsumiu %d whiskey no total de R$%d\n", produtos[i].cont_w, produtos[i].wp);
			}
			if(produtos[i].cont_g!=0){
				printf("\nConsumiu %d gin no total de R$%d\n", produtos[i].cont_g, produtos[i].gp);
			}
			printf("\n----------------\n");
		}
	}
}


