#include <stdio.h>
 
int main() {
 int P1,C1,P2,C2,S1,S2;
 scanf("%d %d %d %d",&P1,&C1,&P2,&C2);{
 S1= P1*C1;
 S2 = P2*C2;
 if(S1==S2){
     printf("0\n");
 }
 else if(S1>S2){
     printf("-1\n");
 }
 else printf("1\n");
 }
    return 0;
}
