#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c; 
	
	printf("Insira os valores de A,B,C\n");	
	scanf("%d %d %d", &a,&b,&c);
	
	if(a == b && a == c){
		printf("Ambos são iguais!!\n");
	}
	
	else if(a == b){
		printf("A e B são iguais!!\n");
		printf("C = %d", c);
	}
	else if(a == c){
		printf("A e C são iguais!!\n");
		printf("B = %d",b);
	} 
	else if(b == c){
		printf("B e C são iguais!!\n");
		printf("A = %d",a);
	}
	
	puts("");
	if(a > b && a >c){
		printf("A é o MAIOR!\n");
	}
		
	
 else if(b > a && b > c){
		printf("B é o MAIOR!\n");
	}
	
	 else if(c > a && b < c){
		printf("C é o MAIOR!\n");
	}	
	
		
	return 0;
}
