#include <stdio.h>
 
int main() {
 int N,i,m;
 scanf("%d",&N);
 for(i=1;i<=10;i++){
     m= i*N;
     printf("%d x %d = %d\n",i,N,m);
 }
 
    return 0;
}
