#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int limite, i;
	
	scanf("%d", &limite);
	
	for(i=0; i<=limite; i++){
		if(i%2 != 0) printf("%d\n", i);
	}
		
	return 0;
}