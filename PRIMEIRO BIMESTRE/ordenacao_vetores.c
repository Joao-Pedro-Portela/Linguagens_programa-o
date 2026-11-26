#include <stdio.h>

int main() {
    int i, V[3], original[3], aux;

    for (i = 0; i < 3; i++) {
        scanf("%d", &V[i]);
        original[i] = V[i];
    }

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

    // Números ordenados
    for (i = 0; i < 3; i++) {
        printf("%d\n", V[i]);
    }

    printf("\n");

    // Números na ordem original, um por linha
    for (i = 0; i < 3; i++) {
        printf("%d\n", original[i]);
    }

    return 0;
}
