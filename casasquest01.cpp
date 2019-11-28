#include <stdio.h>

main()
{
	int cod, x, SPC[5], cpf[5], tipo[5], cpf2, achou=0,qtdp,pos=0,prod,d1,d2,d3,d4,d5,dt;
	float total[5];
	char nome[100];
	
	do{
		printf("\nAMAZON\n");
		printf("*DIGITE 1 PARA CADASTRAR O CPF*\n");
		printf("*DIGITE 2 PARA REALIZAR A COMPRA*\n");
		printf("*DIGITE 3 PARA LISTAR AS COMPRAS*\n");
		printf("*DIGITE 4 PARA ENCERRAR O PROGRAMA*\n");
		scanf("%d", &cod);
		switch(cod){
			case 1:	{
				for(x=0; x<5; x++){
					printf("Informe o CPF\n");
					scanf("%d", &SPC[x]);
					printf("Por favor informe agora seu nome: \n");
					fflush(stdin);
					gets(nome);
					printf("Agora redigite o CPF: \n");
					scanf("%d", &cpf2);
					fflush(stdin);
					if(cpf2==SPC[x]){
						printf("Prezado(a) %s pague suas dividas\n", nome);
						achou = 1;
						}	
					}break;
				}
			
			case 2: {
					if(achou==0){
					printf ("INFORME O PRODUTO QUE DESEJA:\n");
            		printf("Produto 1: TV\n");
        			printf("Produto 2: PS4\n");
        			printf("Produto 3: Celular\n");
        			printf("Produto 4: Bicicleta\n");
        			printf("Produto 5: Hd externo\n");
            		scanf ("%d", &prod);
            		
            		switch(prod){
            			case 1:{
            				printf ("TV de 2.200,00 reais, informe a quantidade de parcelas:\n");
            				d1=2200;
            				scanf ("%d", &qtdp);	
            				
            				if(qtdp<2 || qtdp>5)
            				{
            					tipo[pos]=1;
            					total[pos]=2200;
            					cpf[pos]=cpf2;
            					pos++;
            					break;
							}
							else if(qtdp == 2)
							{
								tipo[pos]=2;
								total[pos]=2200/2;
								cpf[pos]=cpf2;
								pos++;
								break;
							}
							else if(qtdp == 3)
							{
								tipo[pos]=3;
								total[pos]=2200/3;
								cpf[pos]=cpf2;
								pos++;
								break;
							}
							else if(qtdp == 4)
							{
								tipo[pos]=4;
								total[pos]=(2200*1.2)/4;
								cpf[pos]=cpf2;
								pos++;
								break;
							}
							else if(qtdp == 5)
							{
								tipo[pos]=5;
								total[pos]=(2200*1.2)/5;
								cpf[pos]=cpf2;
								pos++;
								break;
							}
						}
						case 2:{
            				printf ("Video game de 400 reais, informe a quantidade de parcelas:\n");
            				d2=400;
            				scanf ("%d", &qtdp);	
            				
            				if(qtdp<2 || qtdp>5)
            				{
            				tipo[pos]=1;
            				total[pos]=400;
            				cpf[pos]=cpf2;
            				pos++;
            				break;
							}
							else if(qtdp == 2)
							{
							tipo[pos]=2;
							total[pos]=400/2;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 3)
							{
							tipo[pos]=3;
							total[pos]=400/3;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 4)
							{
							tipo[pos]=4;
							total[pos]=(400*1.2)/4;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 5)
							{
							tipo[pos]=5;
							total[pos]=(400*1.2)/5;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
						}
							
						case 3:{
            				printf ("Celular 750 reais, informe a quantidade de parcelas:\n");
            				d3=750;
            				scanf ("%d", &qtdp);	
            				
            				if(qtdp<2 || qtdp>5)
            				{
            				tipo[pos]=1;
            				total[pos]=750;
            				cpf[pos]=cpf2;
            				pos++;
            				break;
							}
							else if(qtdp == 2)
							{
							tipo[pos]=2;
							total[pos]=750/2;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 3)
							{
							tipo[pos]=3;
							total[pos]=750/3;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 4)
							{
							tipo[pos]=4;
							total[pos]=(750*1.2)/4;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 5)
							{
							tipo[pos]=5;
							total[pos]=(750*1.2)/5;
							cpf[pos]=cpf2;
							pos++;
							break;
							}	
						}
							
						case 4:{
            				printf ("Bicicleta 3200 reais, informe a quantidade de parcelas:\n");
            				d4=3200;
            				scanf ("%d", &qtdp);	
            				
            				if(qtdp<2 || qtdp>5)
            				{
            				tipo[pos]=1;
            				total[pos]=3200;
            				cpf[pos]=cpf2;
            				pos++;
            				break;
							}
							else if(qtdp == 2)
							{
							tipo[pos]=2;
							total[pos]=3200/2;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 3)
							{
							tipo[pos]=3;
							total[pos]=3200/3;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 4)
							{
							tipo[pos]=4;
							total[pos]=(3200*1.2)/4;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 5)
							{
							tipo[pos]=5;
							total[pos]=(3200*1.2)/5;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
						}
							
						case 5:
							{
            				printf ("Hd externo 350 reais, informe a quantidade de parcelas:\n");
            				d5=350;
            				scanf ("%d", &qtdp);	
            				
            				if(qtdp<2 || qtdp>5)
            				{
            				tipo[pos]=1;
            				total[pos]=3200;
            				cpf[pos]=cpf2;
            				pos++;
            				break;
							}
							else if(qtdp == 2)
							{
							tipo[pos]=2;
							total[pos]=350/2;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 3)
							{
							tipo[pos]=3;
							total[pos]=350/3;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 4)
							{
							tipo[pos]=4;
							total[pos]=(350*1.2)/4;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
							else if(qtdp == 5)
							{
							tipo[pos]=5;
							total[pos]=(350*1.2)/5;
							cpf[pos]=cpf2;
							pos++;
							break;
							}
						}
					}
				}
			}
			case 3: {
				for(x=0;x<5;x++){
					if((d1!=0)||(d2!=0)||(d3!=0)||(d4!=0)||(d5!=0)){
						dt=d1+d2+d3+d4+d5;
						printf("A soma total dos valores dos produtos:\n",dt);
						fflush(stdin);
						}
						else{
						printf("voce nao selecionou produtos\n");
						fflush(stdin);
						}
						break;
				}
			}
		}
	}while((cod<4) && (cod>0));
}
