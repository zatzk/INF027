#include <stdio.h>
#include <stdlib.h>

main() {
	
	int n0,n1,n2,media;
	printf("digite 3 numeros para adquirir a media");
	scanf("%d %d %d", &n0,&n1,&n2);
	
	media = (n0+n1+n2)/3;
	printf("%d", media);
	
	return 0;
}
