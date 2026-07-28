#include <stdio.h>

int main() {
    int NUMBER, Horas;
    float Valor, SAL;

    scanf("%d", &NUMBER);
    scanf("%d", &Horas);
    scanf("%f", &Valor);

    SAL = Horas * Valor;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SAL);

    return 0;
}
