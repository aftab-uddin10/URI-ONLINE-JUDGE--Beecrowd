#include <stdio.h>
 
int main() {
 int N,i;
 double a,b,c,avg;
 scanf("%d",&N);
 for(i=0;i<N;i++){
     scanf("%lf %lf %lf",&a,&b,&c);
    avg = (a*2 + b*3 + c*5 )/10 ;
    printf("%.1lf\n",avg);
 }
 
    return 0;
}
