#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int lim, i;
	double x, y, z;
	double media;
	
	scanf("%d", &lim);
	
	for(i=0; i<lim; i++){
		scanf("%lf %lf %lf", &x, &y, &z);
		
		media = ((x*2)+(y*3)+(z*5))/10;
		
		printf("%.1lf\n", media);
		
	}

	return 0;
}