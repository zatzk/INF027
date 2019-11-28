#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct{
	char nome[15], cpf[12], tel[5];
	int ativo, preco,ingresso;
}estadio;

estadio vendas[MAX];

typedef struct{
	char nome[15], cpf[12], tel[5];
}aux;
aux auxiliar[MAX];



void menu();
void comprarA();
void comprarB();
void listar();
void cancelar();



int main(){
	
	menu();	
	
}

void menu(){
	int op;
	
	do{
		system("cls");
		printf("1 - Comprar\n2 - Listar\n3 - Cancelar\n");
		scanf("%d", &op);
		getchar();
		switch(op){
			case 1: comprarA();
				break;
			case 2: listar();
				break;
			case 3: cancelar();
				break;
		}
	}while(op!=0);
}

void comprarA(){
	char nome[15], cpf[12], tel[5],cpfb[12];
	int op,entr,i;
	do{
		system("cls");
		printf("----------------------Compra----------------------");
		printf("\nNome: ");
		fflush(stdin);
		fgets(nome, sizeof(nome), stdin);
		printf("\nTelefone: ");
		fgets(tel, sizeof(tel), stdin);
		printf("\nInforme CPF: ");
		fflush(stdin);
		fgets(cpfb, sizeof(cpfb), stdin);
		printf("\nConfirme CPF: ");
		fgets(cpf, sizeof(cpf), stdin);
		
		for(i=0;i<MAX;i++){
			strcpy(auxiliar[i].cpf, cpf);
			strcpy(auxiliar[i].nome, nome);
			strcpy(auxiliar[i].tel, tel);
			break;
		}
		
		for(i=0;i<MAX;i++){
			if(strcmp(cpfb, vendas[i].cpf)==0){
				printf("\nCPF ja utilizado na compra\n");
				printf("\n0 - Sair\n");
				scanf("%d", &op);
				if(op==0){
					menu();
				}
			}
		}
		
		for(i=0;i<MAX;i++){
			if(strcmp(vendas[i].cpf, cpfb)!=0){
				comprarB();
			}
		}

	}while(op!=0);
	
}
void comprarB(){
	char nome[15], cpf[12], tel[5],cpfb[12];
	int op,entr,i;
	
	for(i=0;i<MAX;i++){
		strcpy(cpf, auxiliar[i].cpf);
		strcpy(nome, auxiliar[i].nome);
		strcpy(tel, auxiliar[i].tel);
		break;
	}
	
	do{
		printf("Estudante?\n1 - SIM\n2 - NAO\n");
		scanf("%d", &entr);
		if(entr==1){
			printf("Compra realizada no valor de R$50,00\n");
			for(i=0;i<MAX;i++){
				if(vendas[i].ativo!=1){
					strcpy(vendas[i].cpf, cpf);
					strcpy(vendas[i].nome, nome);
					strcpy(vendas[i].tel, tel);
					vendas[i].preco = 50;
					vendas[i].ativo=1;
					vendas[i].ingresso=i;
					break;
				}
			}		
		}
		if(entr==2){
			printf("Compra realizada no valor de R$100,00\n");
			for(i=0;i<MAX;i++){
				if(vendas[i].ativo!=1){
					strcpy(vendas[i].cpf, cpf);
					strcpy(vendas[i].nome, nome);
					strcpy(vendas[i].tel, tel);
					vendas[i].preco = 100;
					vendas[i].ativo=1;
					vendas[i].ingresso=i;
					break;	
				}
			}
		}
		printf("\n1 - Realizar outro cadastro\n0 - Sair\n");
		scanf("%d", &op);
		if(op==1){
			comprarA();
		}
		if(op==0){
			menu();
		}
	}while(op!=0);
}

void listar(){
	int i,op;
	system("cls");
	printf("\nLISTA DE VENDAS\n");
	for(i=0;i<MAX;i++){
		if(vendas[i].ativo==1){
			printf("Nome: %s\n", vendas[i].nome);
			printf("CPF: %s\n", vendas[i].cpf);
			printf("Tel: %s\n", vendas[i].tel);
			printf("Ingresso: %d\n", vendas[i].ingresso+1);
			printf("\n----------------\n\n");
		}
	}
	printf("\n0 para sair\n");
	scanf("%d", &op);
	if(op==0){
		menu();
	}	
}
void cancelar(){
	system("cls");
	char cpf[14];
	int i;
	printf("\nDigite o CPF do ingresso a ser cancelado: ");
	fgets(cpf, sizeof(cpf), stdin);
	for(i=0;i<MAX;i++){
		if(vendas[i].ativo==1){
			if(strstr(vendas[i].cpf, cpf)!=NULL){
				printf("Nome: %s\n", vendas[i].nome);
				printf("CPF: %s\n", vendas[i].cpf);
				printf("Tel: %s\n", vendas[i].tel);
				printf("Ingresso: %d\n", vendas[i].ingresso+1);
				printf("\n----------------\n");	
				vendas[i].ativo=0;
				printf("ingresso excluido com sucesso\n");
				getchar();
			}
		}
	}
}
