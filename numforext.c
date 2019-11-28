#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int u,d1,d2,c,num;
	
	printf("entre com o valor:");
	scanf("%d", &num);
	
	c = num/100;
	d1 = (num%100)/10;
	u = num % 10;
	
	switch (c){
		case 1 : printf("cento") ; break;
		case 2 : printf("duzentos") ; break;
		case 3 : printf("trezentos") ; break;
		case 4 : printf("quatrocentos") ; break;
		case 5 : printf("quinhentos") ; break;
		case 6 : printf("seiscentos") ; break;
		case 7 : printf("setecentos") ; break;
		case 8 : printf("oitocentos") ; break;
		case 9 : printf("novecentos") ; break;
	}
	switch (d1){
			case 0: switch (d2){
				case 1 : printf("onze") ; break;
				case 2 : printf("doze") ; break;
				case 3 : printf("treze") ; break;
				case 4 : printf("quatorze") ; break;
				case 5 : printf("quinze") ; break;
				case 6 : printf("dezesseis") ; break;
				case 7 : printf("dezessete") ; break;
				case 8 : printf("dezoito") ; break;
				case 9 : printf("dezenove") ; break;
				break;
			}
		case 1 : printf("dez") ; break;
		case 2 : printf("vinte") ; break;
		case 3 : printf("trinta") ; break;
		case 4 : printf("quarenta") ; break;
		case 5 : printf("cinquenta") ; break;
		case 6 : printf("sessenta") ; break;
		case 7 : printf("setenta") ; break;
		case 8 : printf("oitenta") ; break;
		case 9 : printf("noventa") ; break;
	}
		switch (u){
			case 1 : printf("um") ; break;
			case 2 : printf("dois") ; break;
			case 3 : printf("tres") ; break;
			case 4 : printf("quatro") ; break;
			case 5 : printf("cinco") ; break;
			case 6 : printf("seis") ; break;
			case 7 : printf("sete") ; break;
			case 8 : printf("oito") ; break;
	}		case 9 : printf("nove") ; break;
	}
	return 0;
}
