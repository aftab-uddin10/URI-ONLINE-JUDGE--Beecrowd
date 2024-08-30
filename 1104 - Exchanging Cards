#include <stdio.h>
#include <string.h>

int A[100001];
int B[100001];

int main()
{
 int a, b, x, i, c, al, be;

 while(scanf("%d %d", &a, &b) && (a || b))
 { 
  memset(A, 0, sizeof(A));
  memset(B, 0, sizeof(B));
  c = 0, al = 0, be = 0;

  for (i = 0; i < a; ++i)
  {
   scanf("%d", &x);
   A[x]++;
  }
  
  for (i = 0; i < b; ++i)
  {
   scanf("%d", &x);
   B[x]++;
  }

  for (i = 0; i < 100001; ++i)
  {
   if(A[i] != 0 && B[i] == 0)
    al++;
   if(A[i] == 0 && B[i] != 0)
    be++;
  }

  if(al < be) printf("%d\n", al);
  else printf("%d\n", be);
 }

 return 0;
}
