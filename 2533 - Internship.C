#include <stdio.h>
 
int main() {
 int N;
while(scanf("%d",&N) != EOF ){
 int A,B,i;
 double ans=0.00,S=0.00,P=0.00;
 for(i=1;i<=N;i++){
     scanf("%d %d",&A,&B);
      S=S+(A*B);
        P=P+B;
 }
 ans= S/(P*100.00);
 printf("%.4lf\n",ans);
}
 
    return 0;
}
