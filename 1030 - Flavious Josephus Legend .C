#include<stdio.h>
int A(int a,int b)
{
      if(a == 1)
      return 1;
      else
      return (A(a-1,b)+b-1)%a+1;
}
int main()
{
      int X,a,b,i;
      while(scanf("%d",&X) == 1){
            for(i=1; i <= X; i++){
                  scanf("%d %d",&a,&b);
                  int t = A(a,b);
                  printf("Case %d: %d\n",i,t);
            }
      }
      return 0;
}
