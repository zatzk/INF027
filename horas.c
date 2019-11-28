#include <stdio.h>

main() {
	
	int horas;
	int minutos;
	
	printf("Digite as horas e os minutos:\n");
	scanf("%d %d", &horas, &minutos);
	
	if (horas > 12)
		horas = horas - 12;
		printf("%d:%dPM", horas, minutos);
	else
		printf("%d:%dAM", horas, minutos);
	
	return 0;
}
