#include <stdio.h>
 
int main() {
 int N,i,A,c=0,s=0,r=0,total=0;
 char b;
 double x,y,z;
 scanf("%d",&N);
 for(i=1;i<=N;i++){
     scanf("%d %c",&A,&b);
     if(A <=15 ){
     total = total+ A;
         switch(b){
             case'C': 
              c=c+A;
              break;
             case'S' :
             s=s+A;
             break;
             case'R':
             r=r+A;
             break;
         }
     }
     }
 x= (c*100.00)/total ;
 y= (s*100.00)/total ;
 z= (r*100.00)/total ;
 
 printf("Total: %d cobaias\n",total);
 printf("Total de coelhos: %d\n",c);
 printf("Total de ratos: %d\n",r);
 printf("Total de sapos: %d\n",s);
 printf("Percentual de coelhos: %.2lf %\n",x);
  printf("Percentual de ratos: %.2lf %\n",z);
   printf("Percentual de sapos: %.2lf %\n",y);
 
    return 0;
}
