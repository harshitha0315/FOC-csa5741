#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i*i;
	}
	printf("the sum of cubes of %d numbers=%d",n,sum);
	return 0;
}
