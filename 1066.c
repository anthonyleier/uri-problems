#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a,b,c,d,e;
	int par=0, impar=0, positivo=0, negativo=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	
	if(a%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(a>0){
		positivo++;
	}else{
		if(a != 0)negativo++;
	}
	
	if(b%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(b>0){
		positivo++;
	}else{
		if(b != 0)negativo++;
	}
	
	
	if(c%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(c>0){
		positivo++;
	}else{
		if(c != 0)negativo++;
	}
	
	
	if(d%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(d>0){
		positivo++;
	}else{
		if(d != 0)negativo++;
	}
	
	
	if(e%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(e>0){
		positivo++;
	}else{
		if(e != 0)negativo++;
	}
	
	
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	
	
	
		
	return 0;
}