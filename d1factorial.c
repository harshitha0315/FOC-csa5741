#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is:%d",n,fact);
	return 0;
}
