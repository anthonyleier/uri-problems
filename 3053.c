#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int lim=0, i=0, movimento=0;
	char copoInicial;
	int a=0, b=0, c=0, a1=0, b1=0, c1=0;
	
	scanf("%d", &lim);
	
	scanf(" %c", &copoInicial);
	
	
	if(copoInicial == 'A') a = 1;
	if(copoInicial == 'B') b = 1;
	if(copoInicial == 'C') c = 1;
	
	
	for(i=0; i<lim; i++){
		scanf("%d", &movimento);
		
		if(movimento == 1){
			a1 = a;
			b1 = b;
			a = b1;
			b = a1;
		}
		
		if(movimento == 2){
			b1 = b;
			c1 = c;
			c = b1;
			b = c1;
			
		}
		
		if(movimento == 3){
			a1 = a;
			c1 = c;
			a = c1;
			c = a1;
		}
	}
	
	if(a == 1) printf("A\n");
	if(b == 1) printf("B\n");
	if(c == 1) printf("C\n");
	

	return 0;
}	