#include<stdio.h>
int main()
{
	int n,r,sum=0,x;
	printf("enter a number to check armstrong number:");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==x)
	{
		printf("%d is a armstrong number",x);
	}
	else
	{
		printf("%d is not a armstrong number",x);
	}
	return 0;
}
