#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159265

	// Usar VIRGULA(,) nas entradas de valores decimais


	
		float calcinss(float sal) {
	    if (sal <= 1412.00) {
	        return sal * 0.075;
	    } 
	    else if (sal <= 2666.68) {
	        return sal * 0.09;
	    } 
	    else if (sal <= 4000.03) {
	        return sal * 0.12;
	    } 
	    else {
	        return sal * 0.14;
	    }
}
		
	//(Salário Base * Alíquota) - Dedução
		
	float calcularIRPF(double salarioBase){
		
		double imposto = 0;
		
		if(salarioBase <= 2259.20){
		imposto = 0;
			}
		else if(salarioBase > 2259.20 &&  salarioBase <= 2826.65){
			imposto = (salarioBase * 0.075) -   169.44;
			}
		else if(salarioBase >  2826.65 && salarioBase <=  3751.05){
			imposto = (salarioBase * 0.15) - 381.44;
		}
		else if(salarioBase > 3751.05 && salarioBase<= 4664.68){
			imposto = (salarioBase * 0.225) - 662.77;
		}
		else{
			
			imposto = (salarioBase * 0.275) - 896.00;
		}	
		
	return imposto;
	}
  


int main(){

	int escolha;

	setlocale(LC_ALL, "Portuguese");
	
	
	printf("				=================================================\n");
	printf("				=================================================\n");
	printf("					      	 EXERCÍCIOS LISTA 2\n");
	printf("				=================================================\n");
	printf("				=================================================\n");
	
	
	printf("1) Terminal Infinity Cash\n");
	printf("2) Operação ENIAC - Trajetória\n");
	printf("3) Cálculo de INSS\n");
	printf("4) Cálculo de IRPF\n");
	printf("5) Emissão de Contra-cheque\n\n");	
	
	printf("Digite o número do exercício correspondente que você quer resolver: ");
	scanf("%d", &escolha);
	
	system("cls");
	
	switch(escolha){
		case 1: {
			
	int n100, n50, n10, n5, n2, n1, valor, original;
	
	printf("=== Saque Bancário ===\n\n");
	
	printf("Informe o valor para o saque: R$ ");
	scanf("%d",&valor);
	
	original = valor;
	
	n100 = valor / 100;
	valor = valor % 100;
	
	n50 = valor / 50;
	valor = valor % 50;
	
	n10 = valor / 10;
	valor = valor %10;
			
	n5 = valor / 5;
	valor = valor % 5;
	
	n2 = valor / 2;
	valor = valor %2;
	
	n1 = valor;
		
		
	printf("\nValor R$ %d",original);
	printf("\n%d notas de R$ 100",n100);	
	printf("\n%d notas de R$ 50",n50);
	printf("\n%d notas de R$ 10",n10);
	printf("\n%d notas de R$ 5",n5);
	printf("\n%d notas de R$ 2",n2);
	printf("\n%d notas de R$ 1",n1);		
		
	break;
		}	
	
	case 2: {
	float v0, angulo_graus;

 
    const float g = 9.8f;
    const float k = 0.5f;
    const float dt = 0.01f; 

   
    float x = 0.0f;
    float y = 0.0f;
    float tempo = 0.0f;

 
    printf("Digite a Velocidade Inicial (v0): ");
    scanf("%f", &v0);

    printf("Digite o Angulo em graus (theta): ");
    scanf("%f", &angulo_graus);

   
    float rad = angulo_graus * (PI / 180.0f);


    float vx = v0 * cos(rad);
    float vy = v0 * sin(rad);

  
    do {
      
        float ax = -k * vx;
        float ay = -g - k * vy;

      
        vx = vx + ax * dt;
        vy = vy + ay * dt;

    
        x = x + vx * dt;
        y = y + vy * dt;

        tempo += dt;

    } while (y > 0.0f);


    printf("\n=== RESULTADO DA SIMULACAO ENIAC ===\n");
    printf("Alcance Maximo (x): %.2f metros\n", x);
    printf("Tempo de Voo: %.2f segundos\n", tempo);
    
    break;
	}	
	
	case 3:{
		
		float salbruto,Inss;
		
		
			printf("=== Cálculo de INSS ===\n\n");
			
			printf("Informe o Valor do Salário Bruto para o Cálculo do INSS: ");
			scanf("%f", &salbruto);
			
			
			Inss = calcinss(salbruto);
			
			printf("\nO valor do INSS é: R$ %.2f", Inss);
		
		break;
	}
	case 4:{
			
			float sal,impostos;
			
		printf("=== Cálculo de IRPF ===\n\n");
		
		printf("Informe o valor do salário para o cálculo do imposto: ");
		scanf("%f", &sal);
		
		impostos =  calcularIRPF(sal);
		
	printf("IRPF: R$ %.2lf\n", impostos);
		
		
		break;
	}
	case 5:{
		
	
			printf("=== Cálculo do CONTRA-CHEQUE ===\n\n");
			
	float valorh, salarioBruto,IRPF,INSS,salarioliquido;
	int horas;
	
	printf("Informe a quantidade de Horas trabalhadas e o Valor da hora: ");
	
	printf("\nHoras trabalhadas: ");
	scanf("%d", &horas);
	
	printf("Valor da Hora: R$ ");
	scanf("%f", &valorh);
	

salarioBruto = horas * valorh;

INSS = calcinss(salarioBruto);

IRPF = calcularIRPF(salarioBruto - INSS);

salarioliquido = salarioBruto - (IRPF + INSS);

	system("cls");
	
	printf("======================================================\n");
	printf("    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)\n");
	printf("======================================================\n");
	
	printf("salário Bruto (Horas x Valor):   R$ %.2f\n", salarioBruto);  
	printf( "(-) Desconto INSS:               R$   %.2f\n",INSS );
	printf( "(-) Desconto IRPF:               R$   %.2f\n",IRPF );
	printf("------------------------------------------------------\n");
	
	printf(" LÍQUIDO A RECEBER:               R$ %.2f\n",salarioliquido);	
		printf("======================================================\n");
	
	break;
}
		
			
	}	
	
		
	
	
	
	
	
	
	return 0;
}
