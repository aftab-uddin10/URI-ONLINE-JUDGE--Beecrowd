#include <stdio.h>
 
int main() {
 int N,X,i,a,b,y;
 while(scanf("%d %d",&N,&X) != EOF)
 {    
     y=0;
    for(i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        if(X==a && b==0) y++;
    } 
    printf("%d\n",y);
 }
 
    return 0;
}
