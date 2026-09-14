#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;

    printf("                                   ------------------------------\n");
    printf("                                   ------------------------------\n");
    printf("                                    EXERCICIOS LISTA DE REVISAO\n");
    printf("                                   ------------------------------\n");
    printf("                                   ------------------------------\n");

    printf("\n1) Validador de CPF.\n\n");
    printf("2) Conversor Dinamico\n\n");
    printf("3) Media Escolar.\n\n");

    printf("Digite o numero do Exercicio para selecionar qual voce quer resolver: ");
    scanf("%d", &n);

    system("cls");

    switch(n) {
        case 1: {
            int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
            int soma1, resto1, digito1;
            int soma2, resto2, digito2;

            printf("======================================\n");
            printf("        VALIDADOR DE CPF              \n");
            printf("======================================\n\n");

            printf("Digite os 11 digitos do CPF separados por espaco:\n");
            scanf("%d %d %d %d %d %d %d %d %d %d %d", 
                  &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

            soma1 = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + 
                    (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);

            resto1 = (soma1 * 10) % 11;

            if (resto1 == 10) {
                digito1 = 0;
            } else {
                digito1 = resto1;
            }

            soma2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + 
                    (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (d10 * 2);

            resto2 = (soma2 * 10) % 11;

            if (resto2 == 10) {
                digito2 = 0;
            } else {
                digito2 = resto2;
            }

            if (digito1 == d10 && digito2 == d11) {
                printf("\nResultado: CPF VALIDO!\n");
            } else {
                printf("\nResultado: CPF INVALIDO!\n");
            }

            break;
        }

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

                    printf("\nResultado: %.2f C = %.2f F\n", temp_entrada, temp_convertida);
                    break;

                case 2:
                    printf("\nDigite a temperatura em Fahrenheit: ");
                    scanf("%f", &temp_entrada);

                    temp_convertida = (temp_entrada - 32.0) * 5.0 / 9.0;

                    printf("\nResultado: %.2f F = %.2f C\n", temp_entrada, temp_convertida);
                    break;

                default:
                    printf("\nOpcao invalida!\n");
                    break;
            }

            break;
        }

        case 3: {
         float n1, n2, n3, media, quanto_falta;

		printf("======================================\n");
		printf("            MEDIA ESCOLAR             \n");
		printf("======================================\n\n");
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		
		media = (n1 + n2 + n3) / 3.0;
		
		printf("\nMedia final: %.2f\n", media);
		
		if (media >= 7.0) {
		    printf("\033[34mSituacao: APROVADO\033[0m\n");
		} 
		else if (media >= 4.0) {
		    quanto_falta = 10.0 - media;
		    printf("\033[32mSituacao: EXAME (Falta %.2f para atingir 10.0)\033[0m\n", quanto_falta);
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
