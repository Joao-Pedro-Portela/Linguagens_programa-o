#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b){
	if(a < b)
		return b;
	else 
		return a;		
}

int main(){
	
	int val[10], i;
	int maior , menor;
	
	printf("Vamos ler os valores: \n");	
	
	for(i = 0; i <10 ; i++){
		scanf("%d", &val[i]);		
	}
	printf("\n");
	
	for(i = 9 ; i >= 0; i--){
		printf("|%d|", val[i] );
	}

return 0;	
}
