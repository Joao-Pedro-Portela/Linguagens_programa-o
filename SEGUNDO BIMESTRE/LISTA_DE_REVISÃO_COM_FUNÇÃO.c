
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// FUNCAO PARA CALCULAR O DIGITO VERIFICADOR DO CPF
int calcularDigito(int cpf[], int quantidade) {
    int soma = 0, resto, digito, i;
    int peso = quantidade + 1;

    for (i = 0; i < quantidade; i++) {
        soma = soma + cpf[i] * peso;
        peso--;
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito = 0;
    } else {
        digito = resto;
    }

    return digito;
}

// FUNCAO PARA CALCULAR A MEDIA ESCOLAR
float calcularMedia(float notas[]) {
    float soma = 0, media;
    int i;

    for (i = 0; i < 3; i++) {
        soma = soma + notas[i];
    }

    media = soma / 3.0;

    return media;
}

int main() {
    int n;

    printf("                                   ------------------------------\n");
    printf("                                   ------------------------------\n");
    printf("                                    EXERCICIOS LISTA DE REVISAO\n");
    printf("                                   ------------------------------\n");
    printf("                                   ------------------------------\n");

    printf("\n1) Validador de CPF.\n\n");
    printf("2) Conversor Dinamico.\n\n");
    printf("3) Media Escolar.\n\n");

    printf("Digite o numero do Exercicio para selecionar qual voce quer resolver: ");
    scanf("%d", &n);

    system("cls");

    switch(n) {

        // QUESTAO 1 
        case 1: {
            int cpf[11];
            int digito1, digito2, i;
            int invalido = 0, iguais = 1;

            printf("======================================\n");
            printf("        VALIDADOR DE CPF              \n");
            printf("======================================\n\n");

            printf("Digite os 11 digitos do CPF separados por espaco:\n");

            // Lendo os 11 digitos usando FOR
            for (i = 0; i < 11; i++) {
                if (scanf("%d", &cpf[i]) != 1) {
                    printf("Entrada invalida!\n");
                    return 1;
                }
            }

          
            for (i = 0; i < 11; i++) {
                if (cpf[i] < 0 || cpf[i] > 9) {
                    invalido = 1;
                }

                if (cpf[i] != cpf[0]) {
                    iguais = 0;
                }
            }

            if (invalido == 1 || iguais == 1) {
                printf("\nResultado: CPF INVALIDO!\n");
                break;
            }

         
            digito1 = calcularDigito(cpf, 9);
            digito2 = calcularDigito(cpf, 10);

            if (digito1 == cpf[9] && digito2 == cpf[10]) {
                printf("\nResultado: CPF VALIDO!\n");
            } else {
                printf("\nResultado: CPF INVALIDO!\n");
            }

            break;
        }

        // QUESTAO 2
        case 2: {
            int opcao;
            float temp_entrada, temp_convertida;

            printf("======================================\n");
            printf("        CONVERSOR DE TEMPERATURA      \n");
            printf("======================================\n\n");

            printf("Escolha a escala de origem:\n");
            printf("1 - Celsius (C)\n");
            printf("2 - Fahrenheit (F)\n");
            printf("Digite a opcao (1 ou 2): ");
            scanf("%d", &opcao);

            switch (opcao) {

                case 1:
                    printf("\nDigite a temperatura em Celsius: ");
                    scanf("%f", &temp_entrada);

                    temp_convertida = (temp_entrada * 9.0 / 5.0) + 32.0;

                    printf("\nResultado: %.2f C = %.2f F\n",
                           temp_entrada, temp_convertida);
                    break;

                case 2:
                    printf("\nDigite a temperatura em Fahrenheit: ");
                    scanf("%f", &temp_entrada);

                    temp_convertida = (temp_entrada - 32.0) * 5.0 / 9.0;

                    printf("\nResultado: %.2f F = %.2f C\n",
                           temp_entrada, temp_convertida);
                    break;

                default:
                    printf("\nOpcao invalida!\n");
                    break;
            }

            break;
        }

        // QUESTAO 3 
        case 3: {
            float notas[3], media, quanto_falta;
            int i;

            printf("======================================\n");
            printf("            MEDIA ESCOLAR             \n");
            printf("======================================\n\n");

      
            for (i = 0; i < 3; i++) {
                printf("Digite a nota %d: ", i + 1);
                scanf("%f", &notas[i]);
            }

          
            media = calcularMedia(notas);

            printf("\nMedia final: %.2f\n", media);

            if (media >= 7.0) {
                printf("\033[34mSituacao: APROVADO\033[0m\n");
            }
            else if (media >= 4.0) {
                quanto_falta = 10.0 - media;

                printf("\033[32mSituacao: EXAME (Falta %.2f para atingir 10.0)\033[0m\n",
                       quanto_falta);
            }
            else {
                printf("\033[31mSituacao: REPROVADO\033[0m\n");
            }

            break;
        }

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
