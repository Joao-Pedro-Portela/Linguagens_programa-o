#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese");

	int A,B,R;
	
	printf("Entre com os valores:\n");
	scanf("%d %d",& A,&B);
	
	if(A > 0 && B > 0 ){
		if(A % 2 == 0 && B % 2 != 0){
			printf("A é multiplo de 2\n");
			printf("B não é multiplo de 2\n");
		}
		if(B % 2 == 0 && A % 2 != 0){
			printf("B é multiplo de 2\n");
			printf("A não é multiplo de 2\n");
		}
		if(B % 2 == 0 && A % 2 == 0){
			printf("A e B são multiplos de 2\n");
		
		}
	
		
	}
	
	else{
		if(A > B){
			printf("A é o MAIOR!!\n");
		}
		if(B > A){
			printf("B é o MAIOR!!");
		}	
			
	}
	

	return 0;
}
