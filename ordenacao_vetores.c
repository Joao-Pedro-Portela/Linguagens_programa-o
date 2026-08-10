#include <stdio.h>

int main() {
    int i, V[3], original[3], aux;

    // Lê os 3 números e guarda uma cópia da ordem original
    for (i = 0; i < 3; i++) {
        scanf("%d", &V[i]);
        original[i] = V[i];
    }

    // Ordena os números em ordem crescente
    for (i = 0; i < 3; i++) {

        if (V[1] < V[0]) {
            aux = V[1];
            V[1] = V[0];
            V[0] = aux;
        }

        if (V[2] < V[1]) {
            aux = V[2];
            V[2] = V[1];
            V[1] = aux;
        }

        if (V[1] < V[0]) {
            aux = V[1];
            V[1] = V[0];
            V[0] = aux;
        }
    }

    // Imprime os números ordenados
    for (i = 0; i < 3; i++) {
        printf("%d\n", V[i]);
    }

    // Linha em branco
    printf("\n");

    // Imprime os números na ordem original
    for (i = 0; i < 3; i++) {
        printf("%d", original[i]);

        if (i < 2) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
