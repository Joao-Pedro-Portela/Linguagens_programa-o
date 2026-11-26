#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, MAIORAB;

    scanf("%d %d %d", &A, &B, &C);

    MAIORAB = (A + B + abs(A - B)) / 2;

    if (C > MAIORAB) {
        printf("%d eh o maior\n", C);
    } else {
        printf("%d eh o maior\n", MAIORAB);
    }

    return 0;
}
