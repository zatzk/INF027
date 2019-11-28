#include <stdio.h>
#include <stdlib.h>



main() {
	
	int data,d0,d1,d2,d3,d4,d5,d6,d7,dd,mm,aa,senha,s0,s1,s2,s3,senha2;
	char v0,v1,v2;
	
	printf("informe a data de nascimento:\n");
	scanf("%d", &data);
	
	d0 = data/10000000;
	d1 = data%10000000/1000000;
	d2 = data%10000000%1000000/100000;
	d3 = data%10000000%1000000%100000/10000;
	d4 = data%10000000%1000000%100000%10000/1000;
	d5 = data%10000000%1000000%100000%10000%1000/100;
	d6 = data%10000000%1000000%100000%10000%1000%100/10;
	d7 = data%10000000%1000000%100000%10000%1000%100%10;
		
	dd = (d0*10) + d1;
	printf("dia:%d\n", dd);
	mm = (d2*10) + d3;
	printf("mes:%d\n", mm);
	aa = (d4*1000) + (d5*100) + (d6*10) + d7;
	printf("ano:%d\n",aa);
	
	if ((dd <= 31) && (mm <= 12) && (aa <= 1984)){
		printf("\nPossui 34 anos ou mais, pode dar continuidade.");
	}
	else{
		printf("\nIdade menor que a necessaria para dar continuidade.");exit(0);
	}
	printf("\n\nDigite agora uma senha:");
	scanf("%d", &senha);
	
	s0 = senha/1000;
	s1 = senha%1000/100;
	s2 = senha%1000%100/10;
	s3 = senha%1000%100%10;
	
	if ((senha>9999) || (senha < 999)){
		printf("\nSenha curta ou longa demais!");
	}
	else if ((s0 == s1) || (s0 == s2) || (s0 == s3)){
		printf("\nNumero repetido!");exit(0);
	}
	else if ((s1 == s0) || (s1 == s2) || (s1 == s3)){
		printf("\nNumero repetido!");exit(0);
	}
	else if ((s2 == s0) || (s2 == s1) || (s2 == s3)){
		printf("\nNumero repetido!");exit(0);
	}
	else if ((s3 == s0) || (s3 == s1) || (s3 == s2)){
		printf("\nNumero repetido!");exit(0);
	}
	else{
		printf("\nValores diferentes, Parabens!\n"); 
	}
		
	printf("\nDigite 3 vogais separadas:\n");
	scanf(" %c %c %c", &v0,&v1,&v2);
	
	if ((v0 != 'a')&&(v0 != 'e')&&(v0 != 'i')&&(v0 != 'o')&&(v0 != 'u')&&(v0 != 'A')&&(v0 != 'E') && (v0 != 'I')&&(v0 != 'O')&&(v0 != 'U')){
	if ((v1 != 'a')&&(v1 != 'e')&&(v1 != 'i')&&(v1 != 'o')&&(v1 != 'u')&&(v1 != 'A')&&(v1 != 'E') && (v1 != 'I')&&(v1 != 'O')&&(v1 != 'U'))
	if ((v2 != 'a')&&(v2 != 'e')&&(v2 != 'i')&&(v2 != 'o')&&(v2 != 'u')&&(v2 != 'A')&&(v2 != 'E') && (v2 != 'I')&&(v2 != 'O')&&(v2 != 'U'))
		printf("\n\nDigitou consoantes!");
	}
	if ((v0 == 'a')||(v0 == 'e')||(v0 == 'i')||(v0 == 'o')||(v0 == 'u')||(v0 == 'A')||(v0 == 'E') || (v0 == 'I')||(v0 == 'O')||(v0 == 'U')){
	if ((v1 == 'a')||(v1 == 'e')||(v1 == 'i')||(v1 == 'o')||(v1 == 'u')||(v1 == 'A')||(v1 == 'E') || (v1 == 'I')||(v1 == 'O')||(v1 == 'U'))
	if ((v2 == 'a')||(v2 == 'e')||(v2 == 'i')||(v2 == 'o')||(v2 == 'u')||(v2 == 'A')||(v2 == 'E') || (v2 == 'I')||(v2 == 'O')||(v2 == 'U'))
		if ((v0 != v1) && (v0 != v2) && (v1 != v0) && (v1 != v2) && (v2 != v0)&& (v2 != v1)){
			printf("\nDigitou valores diferentes!");
		}
		else{
			printf("\nDigitou valores iguais!");exit(0);
		}
	}
	printf("\nRedigite a senha:");
	scanf("%d", &senha2);
	
	if (senha2 == senha){
		printf("\nSenha correta!");
	}
	else{
		printf("\nSenha incorreta");exit(0);
	}
	
	return 0;
}
