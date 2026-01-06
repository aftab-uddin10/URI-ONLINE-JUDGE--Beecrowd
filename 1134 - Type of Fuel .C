#include <stdio.h>
 
int main() {
 int N,A=0,G=0,D=0;
 while(1){
     scanf("%d",&N);
     if(N==1){
         A++;
     }
     if(N==2){
         G++;
     }
     if(N==3){
         D++;
     }
     if(N==4){
         break;
     }
     else{
         while(1)
         break;
        }
 }
 printf("MUITO OBRIGADO\n");
 printf("Alcool: %d\n",A);
 printf("Gasolina: %d\n",G);
 printf("Diesel: %d\n",D);
    return 0;
}
