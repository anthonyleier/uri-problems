#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
	int numeroCidades, i;
   
	do{
		scanf("%d", &numeroCidades);
		
		float x[numeroCidades];
		float y[numeroCidades];
	
		for(i=0; i<numeroCidades; i++){
			scanf("%f %f", x[i], y[i]);
		}
		
	}while(numeroCidades > 0);
 
	return 0;
}
