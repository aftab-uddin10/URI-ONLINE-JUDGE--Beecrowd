#include <stdio.h>
int main(){
	int i,m,n;

	while(1){
	    scanf("%d %d",&n,&m);
	    if(n==0 && m==0) break;
          int A[m];
		long long int k =0;
     for(i = 0; i  <  m; i++){
       scanf("%d",&A[i]);
       	if(i){
       		if(A[i-1] >A[i])
       		  k += A[i-1] - A[i] ;
       	    }else
       		 k +=  n - A[i] ;
	}
	printf("%d\n",k);
}
  return 0;
}
