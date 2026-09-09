#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


#define PI 3.141592

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("                                  ------------------------------\n");
	printf("                                  ------------------------------\n");
	printf("                                        EXERCÍCIOS LISTA 2\n");
	printf("                                  ------------------------------\n");
	printf("                                  ------------------------------\n");	
	
	printf("\n");
	
	printf("1) programa que calcula o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.\n\n");
	printf("2) Uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).\n\n");
	printf("3) programa que lê um valor em reais e a cotação do dólar.\n\n");
	printf("4) Um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.\n\n");
	printf("5) Lê um ângulo em graus e apresente-o convertido em radianos.\n\n");
	printf("6) programa que lê um número inteiro e retorne seu antecessor e seu sucessor.\n\n");
	printf("7) A premiação de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:\n");
	printf("O primeiro receberá 46 porcento do total | O segundo receberá 32 porcento do total. | O terceiro receberá o restante.|\n\n");
	printf("8) um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato (horas :minutos: segundos).\n\n");
	printf("9) calcular/mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12KM/L.\n\n");
	printf("10) programa que leia três valores e apresente o maior dos três valores\n\n");
	
	printf("Digite o número do Exercíco para selecionar qual você que resolver: ");
	scanf("%d",&n);
	
	system("cls");
	
	switch(n){
		
		case 1: {
			
		
			int idade, ano_atual, ano_nasc, ja_fez;
			
			printf("\n--- Cálculo do Ano de Nascimento ---\n\n");
			printf("Digite o ano atual: ");
			scanf("%d", &ano_atual);
			printf("Digite a sua idade: ");
			scanf("%d", &idade);
			
			printf("Você já fez aniversário este ano? (1 para Sim / 2 para Não): ");
			scanf("%d", &ja_fez);
			
			if (ja_fez == 1) {
				ano_nasc = ano_atual - idade;
				printf("Seu ano de nascimento é: %d\n", ano_nasc);
			} 
			else if (ja_fez == 2) {
				ano_nasc = ano_atual - idade - 1;
				printf("Seu ano de nascimento é: %d\n", ano_nasc);
			} 
			else {
				printf("Opção inválida!\n");
			}
			
			break;
		}
			
		case 2:{
		float V_KM,V_MS;
			
			//USAR VIRGULA(,) EM VEZ DE PONTO(.)
			
				printf("\n--- Conversor de KM/H para M/S ---\n\n");
				
				printf("Informe a Velocidade(KM/H): ");
				scanf("%f", &V_KM); 
				
				V_MS = V_KM / 36;
				
				printf("\n");
				printf("O valor de %.1f KM/H convertido em M/S resulta em: %.1fm/s ",V_KM,V_MS );	
				
			break;
		}
		
		case 3: {
			
			//USAR VIRGULA(,) EM VEZ DE PONTO(.)
			
			float VR, VD, Co;
				
			printf("\n--- Conversor de R$ para U$ ---\n\n");
			
			printf("Informe o valor da cotação do Dolar U$: ");
			scanf("%f", &Co);
			printf("\n");
			printf("Informe um valor em R$ para fazer a conversão: ");
			scanf("%f", &VR);
		
			VD = VR / Co; 
			
			printf("\n");
			printf("O Valor de R$ %.2f em Dolar é = U$ %.2f\n", VR, VD);
			
			break;
		}	
		
		case 4: {
			
			float c, f;
			
			//USAR VIRGULA(,) EM VEZ DE PONTO(.)
			
			printf("\n--- Conversor de Celsius para Fahrenheit ---\n\n");		
				
			printf("Informe a Temperatura em Celsius (C): ");
			scanf("%f",&c);	
				
				f = (c * 9.0/5.0) + 32.0;	
			printf("\n");
			printf("O Valor de %.2f graus Celsius (C) em Fahrenheit (F) = %.2f\n", c, f);	
				
				break;
			}
		case 5:{
			//USAR VIRGULA(,) EM VEZ DE PONTO(.)
			
			float graus,rad;
			
			printf("\n--- Conversor de Graus para Radianos ---\n\n");	
			
			printf("Informe o valor do ângulo em Graus: ");
			scanf("%f",&graus);
			
			rad = (graus * PI)/180.0;
			
			printf("\n");
			printf("O Valor do ângulo de %.2f Graus em Radianos = %.2f\n", graus, rad);	
			
			break;
		}	
		
		case 6:{
		int n;
			
		printf("\n--- Antecessor e Sucessor ---\n\n");	
				
		printf("Digite um número para a impressão do Antecessor e sucessor: ");
		scanf("%d", &n);
			
		printf("\n");	
		printf("Antecessor: %d", n-1);
		printf("\n");
		printf("Sucessor: %d", n+1);				
									
		break;
			}
		
		case 7:{
		
		float premiacao = 780000.00;
					
	printf("------------------------------\n");
	printf("------------------------------\n");
	printf("PREMIAÇÃO TOTAL R$ 780000.00 \n");
	printf("------------------------------\n");
	printf("------------------------------\n");	
	
	printf("\n");
	
		
		printf("Premiação Primeiro lugar R$ %.2f", premiacao * 0.46);
		printf("\n\n");
		printf("Premiação Segundo lugar R$ %.2f", premiacao * 0.32);
		printf("\n\n");		
		printf("Premiação Terceiro lugar R$ %.2f", premiacao * 0.22);		
			
			break;
		}
		
		case 8: {
			int total_segundos, horas, minutos, segundos;
			
			printf("\n--- Horas, Minutos e Segundos ---\n\n");	
			
			printf("Informe o valor em segundos: ");
			scanf("%d", &total_segundos);
			
			horas = total_segundos / 3600;                
			int resto = total_segundos % 3600;     
			       
			minutos = resto / 60;                         
			segundos = resto % 60;
			
			
			
			printf("\n");
			printf("O tempo correspondente é: %d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
			
			break;
		}	
		case 9:{
			
			  double tempo, velocidade, distancia, litros;

				
			printf("\n--- Mostrar a quantidade de litros de combustível gastos em uma viagem ---\n\n");	
		
   			 printf("Digite o tempo gasto na viagem (em horas): ");
    		scanf("%lf", &tempo);

    		printf("Digite a velocidade media (em km/h): ");
    		scanf("%lf", &velocidade);

    		distancia = tempo * velocidade;
    		litros = distancia / 12;
    		
			printf("\n");
    		printf("Litros de combustivel necessarios: %.3lf\n", litros);		
				
			break;
		}
		
		
	case 10: {

    int A, B, C, MaiorAB;

    printf("\n--- Maior entre A, B e C ---\n\n");

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("Informe o valor de C: ");
    scanf("%d", &C);

    MaiorAB = (A + B + abs(A - B)) / 2;

    if (C > MaiorAB) {
        printf("\n%d eh o maior!\n", C);
    }
    else {
        printf("\n%d eh o maior!\n", MaiorAB);
    }

    break;
}
		
		
			
}
	
	
	
	return 0;
}
