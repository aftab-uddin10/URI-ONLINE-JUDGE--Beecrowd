/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <stdio.h>
 
int main() {
 int N,i;
 scanf("%d",&N);
 for(i=1;i<=10000;i++){
     if(i%N == 2){
         printf("%d\n",i);
     }
 }
    return 0;
}
