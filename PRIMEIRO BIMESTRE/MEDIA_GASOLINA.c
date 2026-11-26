#include <stdio.h>

int main() {

    int X;
    float Y, MEDIA;

    scanf("%d", &X);
    scanf("%f", &Y);

    MEDIA = X / Y;

    printf("%.3f km/l\n", MEDIA);

    return 0;
}
