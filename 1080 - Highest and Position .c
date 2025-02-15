#include <stdio.h>
 
int main() {
int i,N,p=0,H=0;
for(i=1;i<=100;i++){
    scanf("%d",&N);
 if(N>H){ 
    H=N; 
     p=i;
 }
}
    printf("%d\n",H);
printf("%d\n",p); 

    return 0;
}
