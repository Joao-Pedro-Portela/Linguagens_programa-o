
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

// CONVERTER VELOCIDADE
float converterVelocidade(float velocidade) {
    float resultado;

    resultado = velocidade / 3.6;

    return resultado;
}

// CONVERTER GRAUS PARA RADIANOS
float converterRadianos(float graus) {
    float rad;

    rad = (graus * PI) / 180.0;

    return rad;
}

//  ENCONTRAR O MAIOR
int calcularMaior(int a, int b) {
    int maior;

    maior = (a + b + abs(a - b)) / 2;

    return maior;
}

int main() {
    int n;

    printf("                                  ------------------------------\n");
    printf("                                  ------------------------------\n");
    printf("                                       EXERCICIOS LISTA 2\n");
    printf("                                  ------------------------------\n");
    printf("                                  ------------------------------\n");

    printf("\n");

    printf("1) Programa que calcula o ano de nascimento de uma pessoa.\n\n");
    printf("2) Conversao de KM/H para M/S.\n\n");
    printf("3) Conversao de Reais para Dolar.\n\n");
    printf("4) Conversao de Celsius para Fahrenheit.\n\n");
    printf("5) Conversao de Graus para Radianos.\n\n");
    printf("6) Antecessor e Sucessor de um numero.\n\n");
    printf("7) Divisao de premiacao de R$ 780.000,00.\n\n");
    printf("8) Conversao de Segundos para Horas, Minutos e Segundos.\n\n");
    printf("9) Calculo de combustivel gasto em uma viagem.\n\n");
    printf("10) Maior entre tres valores.\n\n");

    printf("Digite o numero do Exercicio: ");
    scanf("%d", &n);

    system("cls");

    switch(n) {

        // QUESTAO 1
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

        // QUESTAO 2 - UTILIZANDO FUNCAO
        case 2: {
            float V_KM, V_MS;

            printf("\n--- Conversor de KM/H para M/S ---\n\n");

            printf("Informe a Velocidade(KM/H): ");
            scanf("%f", &V_KM);

            // Chamando a funcao
            V_MS = converterVelocidade(V_KM);

            printf("\n");
            printf("O valor de %.1f KM/H convertido em M/S resulta em: %.1f m/s\n",
                   V_KM, V_MS);

            break;
        }

        // QUESTAO 3
        case 3: {
            float VR, VD, Co;

            printf("\n--- Conversor de R$ para U$ ---\n\n");

            printf("Informe o valor da cotacao do Dolar U$: ");
            scanf("%f", &Co);

            printf("\n");
            printf("Informe um valor em R$ para fazer a conversao: ");
            scanf("%f", &VR);

            if (Co > 0) {
                VD = VR / Co;

                printf("\n");
                printf("O Valor de R$ %.2f em Dolar e = U$ %.2f\n", VR, VD);
            }
            else {
                printf("Cotacao invalida!\n");
            }

            break;
        }

        // QUESTAO 4
        case 4: {
            float c, f;

            printf("\n--- Conversor de Celsius para Fahrenheit ---\n\n");

            printf("Informe a Temperatura em Celsius (C): ");
            scanf("%f", &c);

            f = (c * 9.0 / 5.0) + 32.0;

            printf("\n");
            printf("O Valor de %.2f graus Celsius (C) em Fahrenheit (F) = %.2f\n",
                   c, f);

            break;
        }

        // QUESTAO 5 - UTILIZANDO FUNCAO
        case 5: {
            float graus, rad;

            printf("\n--- Conversor de Graus para Radianos ---\n\n");

            printf("Informe o valor do angulo em Graus: ");
            scanf("%f", &graus);

            // Chamando a funcao
            rad = converterRadianos(graus);

            printf("\n");
            printf("O Valor do angulo de %.2f Graus em Radianos = %.2f\n",
                   graus, rad);

            break;
        }

        // QUESTAO 6
        case 6: {
            int numero;

            printf("\n--- Antecessor e Sucessor ---\n\n");

            printf("Digite um numero para a impressao do Antecessor e Sucessor: ");
            scanf("%d", &numero);

            printf("\n");
            printf("Antecessor: %d\n", numero - 1);
            printf("Sucessor: %d\n", numero + 1);

            break;
        }

        // QUESTAO 7
        case 7: {
            float premiacao = 780000.00;

            printf("------------------------------\n");
            printf("------------------------------\n");
            printf("PREMIACAO TOTAL R$ 780000.00\n");
            printf("------------------------------\n");
            printf("------------------------------\n\n");

            printf("Premiacao Primeiro lugar R$ %.2f\n\n", premiacao * 0.46);
            printf("Premiacao Segundo lugar R$ %.2f\n\n", premiacao * 0.32);
            printf("Premiacao Terceiro lugar R$ %.2f\n\n", premiacao * 0.22);

            break;
        }

        // QUESTAO 8
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
            printf("O tempo correspondente e: %d hora(s), %d minuto(s) e %d segundo(s)\n",
                   horas, minutos, segundos);

            break;
        }

        // QUESTAO 9
        case 9: {
            double tempo, velocidade, distancia, litros;

            printf("\n--- Calculo de Combustivel Gasto ---\n\n");

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

        // QUESTAO 10 - UTILIZANDO FUNCAO
        case 10: {
            int A, B, C, MaiorAB;

            printf("\n--- Maior entre A, B e C ---\n\n");

            printf("Informe o valor de A: ");
            scanf("%d", &A);

            printf("Informe o valor de B: ");
            scanf("%d", &B);

            printf("Informe o valor de C: ");
            scanf("%d", &C);

      
            MaiorAB = calcularMaior(A, B);

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
