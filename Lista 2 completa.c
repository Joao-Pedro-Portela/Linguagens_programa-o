#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {
    int n;
    
    printf("                                  ------------------------------\n");
    printf("                                  ------------------------------\n");
    printf("                                       EXERCICIOS LISTA 2\n");
    printf("                                  ------------------------------\n");
    printf("                                  ------------------------------\n");    
    
    printf("\n");
    
    printf("1) programa que calcula o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.\n\n");
    printf("2) Uma velocidade em km/h (quilometros por hora) e apresente convertida em m/s (metros por segundo).\n\n");
    printf("3) programa que le um valor em reais e a cotacao do dolar.\n\n");
    printf("4) Um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.\n\n");
    printf("5) Le um angulo em graus e apresente-o convertido em radianos.\n\n");
    printf("6) programa que le um numero inteiro e retorne seu antecessor e seu sucessor.\n\n");
    printf("7) A premiacao de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso, sendo que:\n");
    printf("O primeiro recebera 46 porcento do total | O segundo recebera 32 porcento do total. | O terceiro recebera o restante.|\n\n");
    printf("8) um valor inteiro, que e o tempo de duracao em segundos de um determinado evento em uma fabrica, e informe-o expresso no formato (horas :minutos: segundos).\n\n");
    printf("9) calcular/mostrar a quantidade de litros de combustivel gastos em uma viagem, ao utilizar um automovel que faz 12KM/L.\n\n");
    printf("10) programa que leia tres valores e apresente o maior dos tres valores\n\n");
    
    printf("Digite o numero do Exercicio para selecionar qual voce quer resolver: ");
    scanf("%d", &n);
    
    system("cls");
    
    switch(n) {
        
        case 1: {
            int idade, ano_atual, ano_nasc, ja_fez;
            
            printf("\n--- Calculo do Ano de Nascimento ---\n\n");
            printf("Digite o ano atual: ");
            scanf("%d", &ano_atual);
            printf("Digite a sua idade: ");
            scanf("%d", &idade);
            
            printf("Voce ja fez aniversario este ano? (1 para Sim / 2 para Nao): ");
            scanf("%d", &ja_fez);
            
            if (ja_fez == 1) {
                ano_nasc = ano_atual - idade;
                printf("Seu ano de nascimento e: %d\n", ano_nasc);
            } 
            else if (ja_fez == 2) {
                ano_nasc = ano_atual - idade - 1;
                printf("Seu ano de nascimento e: %d\n", ano_nasc);
            } 
            else {
                printf("Opcao invalida!\n");
            }
            
            break;
        }
            
        case 2: {
            float V_KM, V_MS;
            
            printf("\n--- Conversor de KM/H para M/S ---\n\n");
            
            printf("Informe a Velocidade(KM/H): ");
            scanf("%f", &V_KM); 
            
            V_MS = V_KM / 3.6; // Corrigido a divisao por 3.6
            
            printf("\n");
            printf("O valor de %.1f KM/H convertido em M/S resulta em: %.1fm/s\n", V_KM, V_MS);    
            
            break;
        }
        
        case 3: {
            float VR, VD, Co;
                
            printf("\n--- Conversor de R$ para U$ ---\n\n");
            
            printf("Informe o valor da cotacao do Dolar U$: ");
            scanf("%f", &Co);
            printf("\n");
            printf("Informe um valor em R$ para fazer a conversao: ");
            scanf("%f", &VR);
        
            VD = VR / Co; 
            
            printf("\n");
            printf("O Valor de R$ %.2f em Dolar e = U$ %.2f\n", VR, VD);
            
            break;
        }   
        
        case 4: {
            float c, f;
            
            printf("\n--- Conversor de Celsius para Fahrenheit ---\n\n");      
                
            printf("Informe a Temperatura em Celsius (C): ");
            scanf("%f", &c); 
                
            f = (c * 9.0/5.0) + 32.0;   
            printf("\n");
            printf("O Valor de %.2f graus Celsius (C) em Fahrenheit (F) = %.2f\n", c, f);    
                
            break;
        }

        case 5: {
            float graus, rad;
            
            printf("\n--- Conversor de Graus para Radianos ---\n\n");   
            
            printf("Informe o valor do angulo em Graus: ");
            scanf("%f", &graus);
            
            rad = (graus * PI) / 180.0;
            
            printf("\n");
            printf("O Valor do angulo de %.2f Graus em Radianos = %.2f\n", graus, rad);  
            
            break;
        }   
        
        case 6: {
            int n;
                
            printf("\n--- Antecessor e Sucessor ---\n\n");   
                    
            printf("Digite um numero para a impressao do Antecessor e sucessor: ");
            scanf("%d", &n);
                
            printf("\n");   
            printf("Antecessor: %d\n", n - 1);
            printf("Sucessor: %d\n", n + 1);             
                                        
            break;
        }
        
        case 7: {
            float premiacao = 780000.00;
                        
            printf("------------------------------\n");
            printf("------------------------------\n");
            printf("PREMIACAO TOTAL R$ 780000.00 \n");
            printf("------------------------------\n");
            printf("------------------------------\n\n");   
            
            printf("Premiacao Primeiro lugar R$ %.2f\n\n", premiacao * 0.46);
            printf("Premiacao Segundo lugar R$ %.2f\n\n", premiacao * 0.32);
            printf("Premiacao Terceiro lugar R$ %.2f\n\n", premiacao * 0.22);       
                
            break;
        }
        
        case 8: {
            int total_segundos, horas, minutos, segundos, resto;
            
            printf("\n--- Horas, Minutos e Segundos ---\n\n");   
            
            printf("Informe o valor em segundos: ");
            scanf("%d", &total_segundos);
            
            horas = total_segundos / 3600;                
            resto = total_segundos % 3600;      
            minutos = resto / 60;                         
            segundos = resto % 60;
            
            printf("\n");
            printf("O tempo correspondente e: %d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
            
            break;
        }   

        case 9: {
            double tempo, velocidade, distancia, litros;
                
            printf("\n--- Mostrar a quantidade de litros de combustivel gastos em uma viagem ---\n\n");   
        
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

        default:
            printf("\nOpcao invalida!\n");
            break;
    }
    
    return 0;
}
