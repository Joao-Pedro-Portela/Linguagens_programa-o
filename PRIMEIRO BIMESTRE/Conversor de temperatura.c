#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
	int  escolha;
	float F,C, temp ;
	
	printf("Digite 1 se sua conversao eh de Celsius (C) para Fahrenheit (F)\n");
	printf("Digite 2 se sua conversao eh de Fahrenheit (F) para Celsius (C)\n");
	scanf("%d",&escolha);
	
	printf("Qual a temperatura?? \n");
	scanf("%f",&temp);
	
	switch(escolha){
		case 1:
		F = (temp * 9/5) + 32;
		printf("A temperatura de %.2f Celsius (C) para Fahrenheit (F) eh: %.2f \n",temp,F);
		break;
		
		case 2:
			C = (temp - 32) * 5/9;
			printf("A temperatura de %.2f Fahrenheit (F) para Celsius (C) eh: %.2f \n",temp,C);	
			break;
		}  
		return 0;	
}
