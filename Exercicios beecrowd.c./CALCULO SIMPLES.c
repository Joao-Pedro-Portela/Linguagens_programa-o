#include <stdio.h>
 
int main() {
 int i, PECA[2], NUMERO[2];
 float VALOR[2],TOTAL[2], TOTAL_PAGAR;
 
for(i= 0;i <2;i++){
    scanf("%d",&PECA[i]);
    scanf("%d",&NUMERO[i]);
    scanf("%f",&VALOR[i]);
 
     TOTAL[i] = VALOR[i] * NUMERO[i];
}
 TOTAL_PAGAR = TOTAL[0] +  TOTAL[1];
 
 printf("VALOR A PAGAR: R$ %.2f\n",TOTAL_PAGAR);
 
    return 0;
    
}
