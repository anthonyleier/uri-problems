#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor, i;
	
	scanf("%d", &valor);
	
	for(i=1; i<valor+1; i++){
		printf("%d %d %d", i, i*i, i*i*i);
		printf("\n%d %d %d\n", i, i*i+1, i*i*i+1);
	}
	return 0;
}
