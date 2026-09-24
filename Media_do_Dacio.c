#include <stdio.h>

int main() {

    float A, B, C, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &A);

    printf("Digite o segundo valor: ");
    scanf("%f", &B);

    printf("Digite o terceiro valor: ");
    scanf("%f", &C);

    media = (A + B + C) / 3;

    printf("A media e: %.2f", media);

    return 0;
}
