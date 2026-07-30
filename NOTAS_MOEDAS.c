#include <stdio.h>

int main() {
    double valor;
    int centavos;
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtd;
    int i;

    scanf("%lf", &valor);

    centavos = valor * 100 + 0.5;

    printf("NOTAS:\n");

    for(i = 0; i < 6; i++) {
        qtd = centavos / notas[i];
        centavos %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd, notas[i] / 100.0);
    }

    printf("MOEDAS:\n");

    for(i = 0; i < 6; i++) {
        qtd = centavos / moedas[i];
        centavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
    }

    return 0;
}
