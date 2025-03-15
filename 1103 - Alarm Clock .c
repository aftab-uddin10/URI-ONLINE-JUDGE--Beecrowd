#include <stdio.h>
 
int main() {
 int x1,y1,x2,y2,ans=0;
 while(1){
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     if(x1==0 && y1==0 && x2==0 && y2==0)
         break;
         else{
             if(x2>x1) ans=((x2-x1)*60)-y1+y2;
             else if(x1>x2) ans=((24-x1+x2)*60)-y1+y2;
             else if(x1==x2){
                 if(y1>y2)  ans= 1440-y1+y2;
             else if(y2>y1) ans=y2-y1;
             }
             printf("%d\n",ans);
             
         }
 }
 
    return 0;
}
