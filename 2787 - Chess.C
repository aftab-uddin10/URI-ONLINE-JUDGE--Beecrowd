#include <stdio.h>
 
int main() {
 int L,C;
 scanf("%d %d",&L,&C);
 if(L%2==0 && C%2==0 || L%2 !=0 && C%2 !=0 ) printf("1\n");
 else printf("0\n");
    return 0;
}
