#include <stdio.h>

main()
{
	int i;
	char p1[10],p2[10], opt;
	
	printf("Insira o nome player 1\n");
	gets( p1);
	printf("Insira o nome player 2\n");
	gets( p2);
	
	printf("Escolha uma das opcoes abaixo:\n");
	printf(" A\n B\n C \n D\n E\n F\n G\n");
	i=0;
	while(i <=10)
	{
		if(i%2==0)
		{
			printf("Vez do player %s\n", p1);	
			scanf(" %c", &opt);
			if(opt != 'd')
			{
			printf("Errou!\n");
			i++;
			}
			else if(opt == 'd')
			{
				printf("Player %s acertou!\n",p1); break;
			}	
		}
		if(i%2==1)
		{
			printf("Vez do player %s\n", p2);
			scanf(" %c", &opt);
			if(opt != 'd')
			{
				printf("Errou!\n");
				i++;
			}
			else if(opt == 'd')
			{
				printf("Player %s acertou!\n",p2); break;
			}
		}
	}
}	


