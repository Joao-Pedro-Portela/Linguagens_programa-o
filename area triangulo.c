#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int base, altura;
	float area;
	
	base = 10;
	altura = 20;
	
	area = (base * altura)/2;
	
	printf("A área do Triangulo Retangulo da Base = %d e Altura = %d é %f", base, altura, area);
	
	return 0;
}
