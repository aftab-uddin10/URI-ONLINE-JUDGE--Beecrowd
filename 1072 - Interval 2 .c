#include <stdio.h>
 
int main() {
 int N,X,count=0,c=0,a;
 scanf("%d",&N);
 for(X=0; X<N ;X++) {
     scanf("%d",&a);
     
    if(a>=10 && a<=20){
         count++ ;}
     
     else {
         c++;
     } }
 
  printf("%d in\n",count);
    printf("%d out\n",c); 
    return 0;
}
