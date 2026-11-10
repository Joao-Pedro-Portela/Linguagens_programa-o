#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return (a + b + abs(a - b)) / 2;
}

int main(){
    int vet[10];
    int i, maior_Valor;

    printf("Digite os valores: \n");

    for(i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    for(i = 0, maior_Valor = vet[0]; i < 10; i++){
        maior_Valor = maior(maior_Valor, vet[i]);
    }

    printf("\n%d eh o maior", maior_Valor);

    return 0;
}
