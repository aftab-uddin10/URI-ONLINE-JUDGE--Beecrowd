#include <stdio.h>

int main(){
    int b, n, i, d, c, v;
    int neg;
    while(1){
        scanf("%d %d",&b,&n);

        if(!b && !n)
            break;
        
        neg = 0;
        int A[b+1];
        for(i = 1; i < b+1; i++)
           scanf("%d",&A[i]);
        for(i = 0; i < n; i++){
            scanf("%d %d %d",&d,&c,&v);
    
            A[d] = A[d] - v;
            A[c] = A[c] + v;
        }
        for(i = 1; i < b + 1; i++){
            if(A[i] < 0){
                neg = 1;
                break;
            }
        }

        if(neg)
            printf("N\n");
        else
           printf("S\n");
    }

    return 0;
}
