#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

	
int main(int argc, char *argv[]) {
	
	char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
	int i;
	char letra;
	int ehvogal = 0;

	printf("Qual a letra??\n");
	scanf("%c",&letra);
	letra = tolower(letra);
	
	for(i = 0; i < 5;i++){
		if(letra == vogal[i]){
			ehvogal = 1;
			break;
			}
}

	if(ehvogal == 1){
		if(letra == 'a' || letra == 'o'){
			printf("aoba");
		}
	else if(letra == 'u' || letra =='i'){
		printf("LA ELE!!");
	}
}
	
	else{
		printf("67!");		
			
}


	switch(letra){
		case 'a':
			printf("A de AMOR");
			break;
			
		case 'b':
			printf("B de Baixinho");
			break;	
	}






	
	return 0;
}
