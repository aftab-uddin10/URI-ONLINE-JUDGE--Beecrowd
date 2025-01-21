#include <stdio.h>
 
int main() {
 int N;
 scanf("%d",&N); 
 if(N>=0 && N<=100) {
 if(N==0) printf("E\n");
 if(N>=1 && N<=35) printf("D\n");
 if(N>=36 && N<=60) printf("C\n");
 if(N>=61 && N<=85) printf("B\n");
 if(N>=86 && N<=100) printf("A\n");
     
 }
    return 0;
}
