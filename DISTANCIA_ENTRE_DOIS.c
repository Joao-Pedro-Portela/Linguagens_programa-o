#include <stdio.h>
#include <math.h>

int main() {

    float x[2], y[2], Distancia;
    int i;

    for(i = 0; i < 2; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

  Distancia = sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
  
  printf("%.4f\n",Distancia);



    return 0;
}
