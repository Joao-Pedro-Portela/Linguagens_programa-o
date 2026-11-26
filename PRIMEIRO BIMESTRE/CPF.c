#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

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

            return 0;
        }

