#include<stdio.h>
int main()
{
    int n,i,sum=0,num;
    float avg;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("\n enter the numbers:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    avg=sum/n;
    printf("\nsum=%d",sum);
    printf("\naverage=%f",avg);
    return 0;
}
