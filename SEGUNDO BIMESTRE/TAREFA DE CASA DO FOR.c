#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int comparaMenor(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {

    int val[10], i;
    int maior, menor;

    printf("Vamos ler os valores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &val[i]);
    }

    maior = val[0];

    for (i = 1; i < 5; i++) {
        maior = comparaMaior(maior, val[i]);
    }

    menor = val[5];

    for (i = 6; i < 10; i++) {
        menor = comparaMenor(menor, val[i]);
    }

    printf("\n");
    printf("Maior dos 5 primeiros: %d", maior);
    printf("\nMenor dos 5 ultimos: %d", menor);

    return 0;
}
