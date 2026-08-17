#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	/*
	
    int n, i;
    int bit[7];

 		

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    
    for (i = 0; i < 7; i++) {
        bit[i] = n % 2;
        n = n / 2;
    }

    printf("O numero em binario eh: ");

  
    for (i = 6; i >= 0; i--) {
        printf("%d", bit[i]);
    }

    printf("\n");

	puts("");
	
    return 0;
 
  */
	  
  int x1, y1, x2, y2;
  float dist;
  
    printf("Insira os valores para p1(x1,y1)\n:");
    	scanf("%d", &x1);
    	scanf("%d",y1);
    
    printf("Insira os valores para p2(x2,y2)\n");
        scanf("%d",&x2);
        scanf("%d",&y2);
        
        
        
 	dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
    printf("Distancia: %f",dist);
return 0;
}	    
