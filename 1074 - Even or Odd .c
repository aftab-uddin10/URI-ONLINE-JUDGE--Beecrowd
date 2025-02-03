/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/


#include <stdio.h>
 
int main() {
 int N,i,j;
scanf("%d",&N);
 for(j=1;j<=N;j++) {
     scanf("%d",&i);
     {
     if(i<0 && i%2 != 0) {
         printf("ODD NEGATIVE\n");
     }
     if(i==0){
         printf("NULL\n");
     }
     if(i>0 && i%2 != 0){
         printf("ODD POSITIVE\n");
     }
      if(i<0 && i%2 == 0){
         printf("EVEN NEGATIVE\n");
     }
      if(i>0 && i%2 == 0){
         printf("EVEN POSITIVE\n");
     }
 }
 }
    return 0;
}
