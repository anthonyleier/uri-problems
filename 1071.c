#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int v1,v2,x,y,i=0;
	int soma=0;
	
	scanf("%d", &v1);
	scanf("%d", &v2);
	
	if(v1 > v2){
		y = v1;
		x = v2;
	}else{
		y = v2;
		x = v1;
	}
	
	for(i=x+1; i<y; i++){
		if(i%2 != 0) {
			soma = soma + i;
		}
	}
	
	printf("%d\n", soma);

	return 0;
}