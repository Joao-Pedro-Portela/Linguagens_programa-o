#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, Base, Altura;
	
	printf("Informe o valor da base:\n");
	scanf("%f", &Base);
	printf("Digite o valor da Altura\n");
	scanf("%f", &Altura);
	
	area = (Base * Altura)/2;
	
	printf("O Valor da area eh = %.2f\n", area);
	
	return 0;
}
