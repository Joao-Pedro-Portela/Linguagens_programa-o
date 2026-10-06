#include <stdio.h>

int ordenar(int valores[]) {
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {

            if (valores[i] > valores[j]) {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }

    return 0;
}

int main() {

    int valores[10];
    int i;


    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

   
    ordenar(valores);

  
    printf("\n5 menores valores:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    
    printf("\n\n5 maiores valores:\n");

    for (i = 5; i < 10; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}
