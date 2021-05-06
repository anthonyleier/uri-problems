#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int valor, i, qtdDivisores = 0, qtdLeituras = 0, j=0;
	
	scanf("%d", &qtdLeituras);
	
	while(j < qtdLeituras){
		scanf("%d", &valor);
		qtdDivisores = 0;
		for(i=1; i<=valor; i++){
			if(valor%i == 0) {
				qtdDivisores++;
			}
		}
		
		if(qtdDivisores>2) printf("%d nao eh primo\n", valor);
		else printf("%d eh primo\n", valor);
		
		j++;
	}
	
	
	
	return 0;
}
