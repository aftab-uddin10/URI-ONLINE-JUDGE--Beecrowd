#include <stdio.h>
 
int main() {
 int X,Y,N,grenais=0,i=0,g=0,e=0;
 while(1){
     scanf("%d %d",&X,&Y);{
         grenais++ ;
         if(X>Y){
             i++;
         }
         if(Y>X){
             g++ ;
         }
         if(X==Y){
             e++;
         }
         printf("Novo grenal (1-sim 2-nao)\n");}
     scanf("%d",&N);
         if(N==1){
         while(1){
             break;
         }
     }
 if(N==2){
     printf("%d grenais\n",grenais);
     printf("Inter:%d\n",i);
     printf("Gremio:%d\n",g);
     printf("Empates:%d\n",e);
     if(i>g){
         printf("Inter venceu mais\n");
     }
     if(g>i){
         printf("Gremio venceu mais\n");
     }
     if(i==g){
         printf("Não houve vencedor\n");
     }
     return 0 ;
 }
     
 }
    return 0;
}
