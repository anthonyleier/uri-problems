#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, ab;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if(a > b){
		if(a > c){
			printf("%i eh o maior\n", a);
		}else{
			printf("%i eh o maior\n", c);
		}
	}else{
		if(b > c){
			printf("%i eh o maior\n", b);
		}else{
			printf("%i eh o maior\n", c);
		}	
	}

	return 0;
}