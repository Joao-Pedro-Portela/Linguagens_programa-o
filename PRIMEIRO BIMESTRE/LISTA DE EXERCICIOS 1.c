#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main() {
    int escolha;
    
    printf("=================================================\n");
    printf("=================================================\n");
    printf("                EXERCICIOS LISTA 1\n");
    printf("=================================================\n");
    printf("=================================================\n\n");
    
    printf("1) Programa que Le numeros e inverte a ordem.\n");
    printf("2) Notacao Cientifica.\n");
    printf("3) Conversao para Base Binaria.\n");
    printf("4) Calculo de Comissao e Salario (URI 1009).\n");
    printf("5) Soma, Media e Produtorio de 4 Valores.\n");
    printf("6) Conversao de Idade em Dias para Anos, Meses e Dias (URI 1020).\n");
    printf("7) Calculo do Volume da Esfera (URI 1011).\n");
    printf("8) Distancia Entre Dois Pontos no Plano Cartesiano.\n\n");
    
    printf("Digite o numero do exercicio correspondente que voce quer resolver: ");
    scanf("%d", &escolha);
    
    system("cls");
    
    switch(escolha) {
        
        case 1: {
            int n1, n2;
                
            printf("=== Inversor de numeros ===\n\n");
            
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);
            
            printf("\n----------------------------\n");
            printf("Numeros invertidos:\n");
            printf("%d\n", n2);
            printf("%d\n", n1);
            printf("----------------------------\n\n");
            
            break;
        }

        case 2: {
            double A;
            int n;

            printf("=== Notacao Cientifica ===\n\n");

            printf("Entre com o valor de A (entre 1 e 10):\n ");
            scanf("%lf", &A);

            if (A >= 1 && A < 10) {
                printf("Entre com o valor de n:\n ");
                scanf("%d", &n);

                printf("Em NOTACAO: %.2lf X 10^%d\n", A, n);
            } else {
                printf("Valor de A invalido! Deve ser maior ou igual a 1 e menor que 10.\n");
            }
            
            break;
        }
        
        case 3: {
            int n;
            
            printf("=== Conversor para Base Binaria ===\n\n");

            printf("Digite um numero (positivo e <= 64): ");
            scanf("%d", &n);

            if (n > 0 && n <= 64) {
                printf("Valor em binario: ");
                
                printf("%d", (n / 64) % 2);
                
                printf("%d", (n / 32) % 2);
                
                printf("%d", (n / 16) % 2);
                
                printf("%d", (n / 8) % 2);
                
                printf("%d", (n / 4) % 2);
                
                printf("%d", (n / 2) % 2);
                
                printf("%d", (n / 1) % 2);
                
                printf("\n");
            } else {
                printf("Numero invalido! Digite um valor positivo menor ou igual a 64.\n");
            }    
            
            break;
        }

        case 4: {
            float salarioFixo, totalVendas, salarioTotal;
            
            printf("=== Calculo de Comissao e Salario (URI 1009) ===\n\n");
            
            printf("Informe o salario fixo: ");
            scanf("%f", &salarioFixo);
            
            printf("Informe o total de vendas no mes (R$): ");
            scanf("%f", &totalVendas);
            
            salarioTotal = salarioFixo + (totalVendas * 0.15);
            
            printf("\nTOTAL A RECEBER = R$ %.2f\n", salarioTotal);    

            break;
        }    

        case 5: {
            int n1, n2, n3, n4, soma, produtorio;
            float media; 
            
            printf("=== Soma, Media e Produtorio ===\n\n");
            
            printf("Informe 4 valores para os calculos:\n\n");
            
            printf("Primeiro numero: ");
            scanf("%d", &n1);
            
            printf("Segundo numero: ");
            scanf("%d", &n2);
            
            printf("Terceiro numero: ");
            scanf("%d", &n3);
                
            printf("Quarto numero: ");
            scanf("%d", &n4);
            
            soma = n1 + n2 + n3 + n4;
            produtorio = n1 * n2 * n3 * n4;
            media = soma / 4.0;
            
            printf("----------------------------\n");
            printf("A soma dos numeros = %d\n", soma);
            printf("O produtorio dos numeros = %d\n", produtorio);            
            printf("A media dos numeros = %.2f\n", media);
            printf("----------------------------\n");
            
            break;
        }

        case 6: {
            int dias, meses, anos;
                
            printf("=== Idade em Anos, Meses e Dias ===\n\n");    
            
            printf("Informe o valor da sua idade em DIAS: ");
            scanf("%d", &dias);
            
            anos = dias / 365;
            dias = dias % 365;

            meses = dias / 30;
            dias = dias % 30;        
                
            printf("\n%d Ano(s)", anos);
            printf("\n%d mes(es)", meses);    
            printf("\n%d Dia(s)\n", dias);    
                
            break;
        }

        case 7: {
            float volume, raio;
            
            printf("=== Calculo do Volume da Esfera ===\n\n");    
            
            printf("Informe o valor do Raio: ");
            scanf("%f", &raio);
            
            volume = (4.0 / 3.0) * PI * pow(raio, 3);
            
            printf("\nO valor do volume da esfera e de: %.2f\n", volume);
                
            break;
        }

        case 8: {
            float x1, x2, y1, y2, c1, c2, d;
            
            printf("=== Distancia Entre Dois Pontos no Plano Cartesiano ===\n\n");
            
            printf("Informe os valores:\n");
            
            printf("x1 = ");
            scanf("%f", &x1);
        
            printf("x2 = ");
            scanf("%f", &x2);
            
            printf("y1 = ");
            scanf("%f", &y1);
            
            printf("y2 = ");
            scanf("%f", &y2);
                
            c1 = pow(x2 - x1, 2);
            c2 = pow(y2 - y1, 2);
            
            d = sqrt(c1 + c2);
            
            printf("\ncateto 1 = %.2f", c1);
            printf("\ncateto 2 = %.2f", c2);
            printf("\nDistancia entre os pontos = %.2f\n", d);
            
            break;
        }

        default:
            printf("Opcao invalida!\n");
            break;
    }
    
    return 0;
}
