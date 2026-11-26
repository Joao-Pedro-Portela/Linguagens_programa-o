#include <stdio.h>

int main() {

    float Tempo, Litros;
    int Velocidade;

    scanf("%f %d", &Tempo, &Velocidade);

    Litros = (Tempo * Velocidade) / 12.0;

    printf("%.3f\n", Litros);

    return 0;
}
