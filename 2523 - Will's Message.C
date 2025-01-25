#include<stdio.h>
#include<string.h>
int main()
{
    char A[1000];
    int i,n,a;
while(scanf("%s",A) != EOF)
    {


    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        printf("%c",A[a-1]);
    }
    printf("\n");
    }
}
