#include <stdio.h>
 
int main() {
 int Valor,inteiro;
 int n1,n2,n5,n10,n20,n50,n100;
 
 scanf("%d", &Valor);
 
 inteiro = Valor;
 
 n100 = Valor/100;
 Valor %= 100;
 
 n50 = Valor/50;
 Valor %= 50;
 
 n20 = Valor/20;
 Valor %= 20;
  
 n10 = Valor/10;
 Valor %= 10;
  
 n5 = Valor/5;
 Valor %= 5;
 
 n2 = Valor/2;
 Valor %= 2;
 
 n1 = Valor/1;
 Valor %= 1;
 
 printf("%d\n", inteiro);
 printf("%d nota(s) de R$ 100,00\n",n100);
 printf("%d nota(s) de R$ 50,00\n",n50);
 printf("%d nota(s) de R$ 20,00\n",n20);
 printf("%d nota(s) de R$ 10,00\n",n10); 
 printf("%d nota(s) de R$ 5,00\n",n5);
 printf("%d nota(s) de R$ 2,00\n",n2);
 printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}
