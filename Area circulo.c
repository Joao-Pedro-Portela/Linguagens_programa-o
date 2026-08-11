#include <stdio.h>
#include <stdlib.h>

#define PI 3.14 

int main(int argc, char *argv[]) {
	
	float AREA, RAIO;
	
	printf("Informe o Valor do raio:\n");
	scanf("%f", &RAIO);
	
	AREA = PI *(RAIO*RAIO);
	
	printf("O valor da area do circulo de raio R %.2f eh: %.2f\n",RAIO, AREA);
	
	return 0;
}
