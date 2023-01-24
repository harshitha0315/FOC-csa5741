#include<stdio.h>
int main()
{
	int i,n,sum,temp;
	printf("enter any number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum=(i*i*i)+sum;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("%d is armstrong number",temp);
	}
	else
	{
		printf("%d is not a armstrong number",temp);
	}
	return 0;
}

