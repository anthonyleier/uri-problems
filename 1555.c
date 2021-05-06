#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int qtd;
	int x, y;
	int r, b, c;
	int i;
	scanf("%i", &qtd);
	
	for(i=0; i<qtd; i++){
		scanf("%i", &x);
		scanf("%i", &y);
		
			
		r = (9*x*x) + y*y;
		b = x*x*2 + 25*y*y;
		c = -100*x + y*y*y;	
		
		if(r > b){
			if(r > c){
				printf("Rafael ganhou\n", r);
			}else{
				printf("Carlos ganhou\n", c);
			}
		}else{
			if(b > c){
				printf("Beto ganhou\n", b);
			}else{
				printf("Carlos ganhou\n", c);
			}	
	}
				
	}
	return 0;
}