#include <stdio.h>
#include <stdlib.h>

// pau no cu de quem ta lendo

int main() 
{
	float nota1;
	float nota2;
	float media;
	
	printf("Digite a nota 1:\n");
	scanf("%f", &nota1);
	printf("Digite a nota 2:\n");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("%.1f + %.1f = %.1f\n", nota1, nota2, media);
	if (media<6)
	{
		printf("\nAluno Reprovado\n");
	}
	else
	{
		printf("\nAluno Aprovado\n");
	}
	return 0;
}
