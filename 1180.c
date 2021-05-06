#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, j = 0, k=0;
	int menorValor, pos;
	scanf("%d", &i);
	int x[i];
	
	while(j < i){
		scanf("%d", &x[k]);
		
		k++;
		j++;
	}
	
	menorValor = x[0];
	pos = 0;
	
	for(j=0; j<i; j++){
		if(menorValor > x[j]) {
			menorValor = x[j];
			pos = j;
		}
	}
	
	printf("Menor valor: %d", menorValor);
	printf("\nPosicao: %d\n", pos);
	
	return 0;
}
