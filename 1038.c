#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	float total;
	
	scanf("%i", &a);
	scanf("%i", &b);
	
	if(a == 1){
		total += 4*b;
	}
	if(a == 2){
		total += 4.5*b;
	}
	if(a == 3){
		total += 5*b;
	}
	if(a == 4){
		total += 2*b;
	}
	if(a == 5){
		total += 1.5*b;
	}
	
	printf("Total: R$ %.2f\n", total);
	
	return 0;
}