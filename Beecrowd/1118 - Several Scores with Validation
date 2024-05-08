#include<stdio.h>
int main()
{
    float N,sum,count,avg;
    int X;
    sum = count =  0;
    while(1)
    {
        scanf("%f",&N);
        if(N < 0.0 || N > 10.0)
            printf("nota invalida\n");
        else
        {
            sum=sum+N;
            count++;
            if(count==2)
            {
                avg= sum/2.00 ;
                printf("media = %.2lf\n",avg);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%d",&X);
                    if(X==1)
                    {
                        sum = count = 0;
        
                        break;
                    }
                    else if(X==2)
                        return 0 ;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}
