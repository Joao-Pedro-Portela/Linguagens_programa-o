#include <stdio.h>
 
int main() {
 
 float A , B, C, Perimetro, Area;
    
    scanf("%f %f %f", &A,&B,&C);
    
     if (A + B > C && A + C > B && B + C > A) {
        Perimetro = A + B + C;
      
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else{
        Area = ((A + B) * C)/2;
        printf("Area = %.1f\n", Area);
    }
    
    return 0;
}



#include <stdio.h>

 int main(){
 	
 int N[5],i;
 int pares = 0;
 int impar = 0;
 int posi = 0;
 int neg = 0;
 
 
 for(i = 0; i < 5; i++){
     scanf("%d", &N[i]);
    }
    
    puts("");
 
 for(i = 0; i < 5 ; i++){
 	
 	if(N[i] % 2 == 0){
        pares++;
        
     }
    if(N[i] % 2 != 0){
        impar++;
             }
    if(N[i] > 0){
         posi++;
         
     }
    if(N[i] < 0){
         neg++;
         
     }
 }
 
 
 printf("%d valor(es) par(es)\n", pares);
 printf("%d valor(es) impar(es)\n", impar);
 printf("%d valor(es) positivo(s)\n", posi);
 printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
