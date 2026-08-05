#include <stdio.h>
 
int main() {
 double N[4],media,exame,media2;
 int i;
 for(i = 0;i < 4 ;i++){
     scanf("%lf", &N[i]);
 }
    
    media = ((N[0] * 2) + (N[1]*3) + (N[2] * 4) + (N[3]))/10;
     
        printf("Media: %.1lf\n",media);
     
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }    
    else{
        printf("Aluno em exame.\n"); 
        scanf("%lf",&exame);
            media2 = (media + exame)/2;
        printf("Nota do exame: %.1lf\n",exame);
        
        if(media2 >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",media2);
        }    
        else{
            printf("Aluno reprovado.\n");
             printf("Media final: %.1lf\n",media2);
        }
    }
    return 0;
}
