#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor;
	int horas, minutos, segundos;
	
	scanf("%i", &valor);
	
	horas = valor/3600;
	valor = valor - horas*3600;
	minutos = valor/60;
	valor = valor - minutos*60;
	segundos = valor;
	
	printf("%i:%i:%i\n", horas,minutos,segundos);
	
	return 0;
}