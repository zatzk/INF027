#include <stdlib.h>
#include <stdio.h>

int spc[5], cod, cpf[5], x, tipo[5], cpf2, achou=0, prod, qtdp, pos=0;
float total[5];
char nome[100];

int main()
{
    do
    {
        printf("--CASAS BAHIA S.A-- \n");
        printf("Digite 1 para cadastrar o CPF\n");
        printf("Digite 2 para realizar a compra\n");
        printf("Digite 3 para listar as compras\n");
        printf("Digite 4 para encerrar o programa\n");
        scanf("%d", &cod);
        
        switch(cod)
        {
            case 1:
            {
                for(x=0; x<5; x++)
                {
                    printf("INFORME O CPF:\n");
                    scanf("%d", &spc[x]);
                }
                break;
            }
            
            case 2:
            {
            printf( "Por favor digite o seu nome\n");
            fflush (stdin);
            gets (nome);
            printf ("INFORME O SEU CPF:\n");
            scanf ("%d", &cpf2);
            fflush (stdin);
                
                for(x=0; x<5; x++)
                {
                    if(cpf2==spc[x])
                    {
                        printf("SEU CALOTEIRO, PAGUE SUAS DIVIDAS");
                        achou=1;
                    }
                }
            }
            
            case 3:
            	{
            		if(achou==0)
            		{
            		printf ("INFORME O PRODUTO QUE DESEJA:\n");
            		printf("Produto 1: TV\n");
        			printf("Produto 2: PS4\n");
        			printf("Produto 3: Celular\n");
        			printf("Produto 4: Bicicleta\n");
        			printf("Produto 5: Hd externo\n");
            		scanf ("%d", &prod);
            		
            		switch(prod)
            			{
            				
            			case 1:
            				{
            				printf ("TV de 2.200,00 reais, informe a quantidade de parcelas:\n");
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
							
						case 2:
							{
            				printf ("Video game de 400 reais, informe a quantidade de parcelas:\n");
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
							
							case 3:
							{
            				printf ("Celular 750 reais, informe a quantidade de parcelas:\n");
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
							
							case 4:
							{
            				printf ("Bicicleta 3200 reais, informe a quantidade de parcelas:\n");
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
				
			case 4:
			{
				for(x=0; x<5; x++)
				{
					printf("Cliente %d, voce comprou o produto: %d no valor total de: %.2f \n", cpf2, tipo[x], total[x]);
				}	
			}			
        }
        
    }while(cod < 4);
    

    return 0;
}