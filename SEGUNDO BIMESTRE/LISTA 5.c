
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Funcao para calcular a distancia entre dois pontos
double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int opcao, i, j, aux;

    do {
        printf("\n========== LISTA 05 ==========\n");
        printf("1 - Ordem inversa e decrescente\n");
        printf("2 - Notacao cientifica\n");
        printf("3 - Numero binario\n");
        printf("4 - Maior de 10 valores\n");
        printf("5 - Paridade e primalidade\n");
        printf("6 - Distancia euclidiana\n");
        printf("7 - Numeros consecutivos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }

        switch (opcao) {

            // QUESTAO 1
            case 1: {
                int numeros[100], ordenados[100];

                for (i = 0; i < 100; i++) {
                    printf("Digite o numero %d: ", i + 1);
                    scanf("%d", &numeros[i]);
                    ordenados[i] = numeros[i];
                }

                printf("\nOrdem inversa:\n");

                for (i = 99; i >= 0; i--) {
                    printf("%d ", numeros[i]);
                }

                // Ordenando do maior para o menor
                for (i = 0; i < 99; i++) {
                    for (j = i + 1; j < 100; j++) {
                        if (ordenados[i] < ordenados[j]) {
                            aux = ordenados[i];
                            ordenados[i] = ordenados[j];
                            ordenados[j] = aux;
                        }
                    }
                }

                printf("\nOrdem decrescente:\n");

                for (i = 0; i < 100; i++) {
                    printf("%d ", ordenados[i]);
                }

                printf("\n");
                break;
            }

            // QUESTAO 2
            case 2: {
                double numero;
                int expoente = 0;

                printf("Digite um numero positivo: ");
                scanf("%lf", &numero);

                if (!isfinite(numero) || numero <= 0) {
                    printf("Numero invalido!\n");
                    break;
                }

                while (numero >= 10) {
                    numero = numero / 10;
                    expoente++;
                }

                while (numero < 1) {
                    numero = numero * 10;
                    expoente--;
                }

                printf("Notacao cientifica: %.6f x 10^%d\n",
                       numero, expoente);
                break;
            }

            // QUESTAO 3
            case 3: {
                int numero, binario[7];
                int contador = 0;

                printf("Digite um numero de 1 a 64: ");
                scanf("%d", &numero);

                if (numero < 1 || numero > 64) {
                    printf("Numero invalido!\n");
                    break;
                }

                while (numero > 0) {
                    binario[contador] = numero % 2;
                    numero = numero / 2;
                    contador++;
                }

                printf("Numero em binario: ");

                for (i = contador - 1; i >= 0; i--) {
                    printf("%d", binario[i]);
                }

                printf("\n");
                break;
            }

            // QUESTAO 4
            case 4: {
                int valores[10], maior;
                long long a, b;

                for (i = 0; i < 10; i++) {
                    printf("Digite o valor %d: ", i + 1);
                    scanf("%d", &valores[i]);
                }

                maior = valores[0];

                // Formula: (a + b + abs(a - b)) / 2
                for (i = 1; i < 10; i++) {
                    a = maior;
                    b = valores[i];

                    maior = (int)((a + b + llabs(a - b)) / 2);
                }

                printf("%d eh o maior\n", maior);
                break;
            }

            // QUESTAO 5
            case 5: {
                int vetor[100];

                for (i = 0; i < 100; i++) {
                    printf("Digite o numero %d: ", i + 1);
                    scanf("%d", &vetor[i]);
                }

                for (i = 0; i < 100; i++) {
                    printf("\nNumero %d: ", vetor[i]);

                    // Verificando paridade
                    if (vetor[i] % 2 == 0) {
                        printf("Par");
                    } else {
                        printf("Impar");
                    }

                    // Verificando primalidade pela funcao
                    if (ehPrimo(vetor[i]) == 1) {
                        printf(" e Primo");
                    } else {
                        printf(" e Nao Primo");
                    }
                }

                printf("\n");
                break;
            }

            // QUESTAO 6
            case 6: {
                double x1[10], y1[10];
                double x2[10], y2[10];
                double resultado;

                for (i = 0; i < 10; i++) {
                    printf("\nCoordenadas %d:\n", i + 1);

                    printf("Digite x1: ");
                    scanf("%lf", &x1[i]);

                    printf("Digite y1: ");
                    scanf("%lf", &y1[i]);

                    printf("Digite x2: ");
                    scanf("%lf", &x2[i]);

                    printf("Digite y2: ");
                    scanf("%lf", &y2[i]);
                }

                for (i = 0; i < 10; i++) {
                    resultado = distancia(
                        x1[i], y1[i], x2[i], y2[i]
                    );

                    printf("Distancia %d: %.2f\n",
                           i + 1, resultado);
                }

                break;
            }

            // QUESTAO 7
            case 7: {
                int vetor[100];
                int encontrou = 0;
                int emSequencia = 0;

                for (i = 0; i < 100; i++) {
                    printf("Digite o numero %d: ", i + 1);
                    scanf("%d", &vetor[i]);
                }

                printf("\nNumeros consecutivos:\n");

                for (i = 0; i < 99; i++) {
                    if ((long long)vetor[i + 1] ==
                        (long long)vetor[i] + 1) {

                        if (emSequencia == 0) {
                            printf("%d ", vetor[i]);
                        }

                        printf("%d ", vetor[i + 1]);

                        encontrou = 1;
                        emSequencia = 1;

                    } else {
                        if (emSequencia == 1) {
                            printf("\n");
                        }

                        emSequencia = 0;
                    }
                }

                if (encontrou == 0) {
                    printf("Nenhuma sequencia encontrada.\n");
                } else {
                    printf("\n");
                }

                break;
            }

            case 0:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
