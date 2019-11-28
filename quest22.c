#include <stdio.h>
#include <stdlib.h>


main() {
	
	int num;
         printf ("\n Digite o valor do numero:");
         scanf ("%d",& num);   
         if (num <= 0) num = (num * -1);
               printf ("\n O modulo do numero e %d", num);
	
	return 0;
}
