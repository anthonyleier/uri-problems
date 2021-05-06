#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int comando = 0;
	int alcool = 0, gasolina = 0, diesel = 0;
		
	
	while(comando != 4){		
		scanf("%i", &comando);
		if(comando == 1) alcool++;
		if(comando == 2) gasolina++;
		if(comando == 3) diesel++;	
	}
	
	printf("MUITO OBRIGADO");
	printf("\nAlcool: %i", alcool);
	printf("\nGasolina: %i", gasolina);
	printf("\nDiesel: %i\n", diesel);
	
	return 0;
}