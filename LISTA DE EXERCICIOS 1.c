#include <stdio.h>
#include <math.h>

int main() {

    /* 1) Ler dois numeros inteiros e imprimir na ordem inversa */

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    printf("%d %d\n", n2, n1);


    /* 2) Ler um double e imprimir em notacao cientifica */

    double valor;

    scanf("%lf", &valor);

    printf("%.2e\n", valor);


    /* 3) Ler um numero de 1 a 64 e mostrar em binario */

    int n;

    scanf("%d", &n);

    if (n >= 32) {
        printf("1");
        n = n - 32;
    } else {
        printf("0");
    }

    if (n >= 16) {
        printf("1");
        n = n - 16;
    } else {
        printf("0");
    }

    if (n >= 8) {
        printf("1");
        n = n - 8;
    } else {
        printf("0");
    }

    if (n >= 4) {
        printf("1");
        n = n - 4;
    } else {
        printf("0");
    }

    if (n >= 2) {
        printf("1");
        n = n - 2;
    } else {
        printf("0");
    }

    if (n >= 1) {
        printf("1");
    } else {
        printf("0");
    }

    printf("\n");


    /* 4) URI 1009 - Salario e comissao */

    double salario, vendas, total;

    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);


    /* 5) Soma, media e produtorio de quatro valores */

    double a, b, c, d;
    double soma, media, produto;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    soma = a + b + c + d;
    media = soma / 4;
    produto = a * b * c * d;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produtorio = %.2lf\n", produto);


    /* 6) URI 1020 - Idade em anos, meses e dias */

    int idade, anos, meses, dias;

    scanf("%d", &idade);

    anos = idade / 365;
    idade = idade % 365;

    meses = idade / 30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);


    /* 7) URI 1011 - Volume da esfera */

    double raio, volume;
    double pi = 3.14159;

    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);


    /* 8) Distancia entre dois pontos */

    double x1, y1, x2, y2;
    double distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia = %.4lf\n", distancia);


    return 0;
}
