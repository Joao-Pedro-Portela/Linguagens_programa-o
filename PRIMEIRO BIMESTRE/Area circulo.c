#include <stdio.h>
#include <stdlib.h>

#define PI 3.14 

int main(int argc, char *argv[]) {
	
	float AREA, RAIO , R2;
	float AREA_T, BASE, base, ALTURA;
	
	printf("Informe o Valor do raio:\n");
	scanf("%f", &RAIO);
	
	R2 = RAIO *RAIO;
	AREA = PI * R2;
	
	printf("O valor da area do circulo de raio R %.2f eh: %.2f\n",RAIO, AREA);
	
	puts("");
	
	printf("Insira o valor da Base maior para fazer o calculo da Area do trapezio:\n");
	scanf("%f", &BASE);
	
	printf("Informe o valor da base menor:\n");
	scanf("%f", &base);
	
	printf("Digite o valor da altura:\n");
	scanf("%f", &ALTURA);
	
	AREA_T = ((BASE + base) *ALTURA)/2;
	
	puts("");
	puts("---------------------------------------------------------------------------------------");
	puts("");
	printf("O valor da Area do trapezio com Base maior %.2f, base menor %.2f e altura %.2f = %.2f", BASE, base, ALTURA, AREA_T);
	puts("");
	puts("");
	puts("---------------------------------------------------------------------------------------");
	puts("");
	
	return 0;
}
