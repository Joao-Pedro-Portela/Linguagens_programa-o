#include <stdio.h>

int main() {
    double A, B, C;
    double AREA_TRIANGULO, AREA_CIRCULO, AREA_TRAPEZIO, AREA_QUADRADO, AREA_RETANGULO;
    double Pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    AREA_TRIANGULO = (A * C) / 2;
    AREA_CIRCULO = Pi * C * C;
    AREA_TRAPEZIO = ((A + B) * C) / 2;
    AREA_QUADRADO = B * B;
    AREA_RETANGULO = A * B;

    printf("TRIANGULO: %.3lf\n", AREA_TRIANGULO);
    printf("CIRCULO: %.3lf\n", AREA_CIRCULO);
    printf("TRAPEZIO: %.3lf\n", AREA_TRAPEZIO);
    printf("QUADRADO: %.3lf\n", AREA_QUADRADO);
    printf("RETANGULO: %.3lf\n", AREA_RETANGULO);

    return 0;
}
