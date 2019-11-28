#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 5

typedef struct{
	char nome[20],cpf[14], sexo[10];
	int ativo;
	
}Aluno;
Aluno alunos[MAX];

void menu();
void cadastrar();
void listar();
void pesquisar();

int main(){
	
	menu();
	
}

void menu(){
	int op;
	do{
		system("cls");
		printf("\n1 - Cadastrar aluno\n2 - Listar aluno\n3 - Pesquisar\n0 - Sair\n");
		scanf("%d", &op);
		getchar();
		switch(op){
			case 1:
				cadastrar();
			break;
			case 2: 
				listar();
			break;
			case 3:
				pesquisar();
			break;
		}
		getchar();
	}while(op!=0);
}
void cadastrar(){
	system("cls");
	char nome[20],cpf[14], sexo[10];
	int op,i;
	do{
		printf("\nNome: ");
		fgets(nome, sizeof(nome), stdin);
		printf("\nCPF: ");
		fgets(cpf, sizeof(cpf), stdin);
		printf("\nSexo: ");
		fgets(sexo, sizeof(sexo), stdin);
		for(i = 0; i < MAX; i++){
			if(alunos[i].ativo == 0){
				strcpy (alunos[i].cpf, cpf);
				strcpy(alunos[i].nome, nome);
				strcpy(alunos[i].sexo, sexo);
				alunos[i].ativo=1;
				break;
			}
		}
		printf("\n1 - Continuar\n0 - Sair\n");
		scanf("%d", &op);
	}while(op!=0);
}
void pesquisar(){
	system("cls");
	char cpf[14];
	int i;
	printf("\nDigite o CPF para realizar pesquisa: ");
	fgets(cpf, sizeof(cpf), stdin);
	for(i=0;i<MAX;i++){
		if(strstr(alunos[i].cpf, cpf)!=NULL){
			printf("Nome: %s\n", alunos[i].nome);
			printf("CPF: %s\n", alunos[i].cpf);
			printf("Sexo: %s\n", alunos[i].sexo);
			printf("\n----------------\n");
		}
	}
}
void listar(){
	int i;
	system("cls");
	printf("\nLISTA DE ALUNOS\n");
	for(i = 0; i < MAX; i++){
		if(alunos[i].ativo==1){
			printf("Nome: %s\n", alunos[i].nome);
			printf("CPF: %s\n", alunos[i].cpf);
			printf("Sexo: %s\n", alunos[i].sexo);
			printf("\n----------------\n");
		}
	}
}
