#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("enter a number to print its reverse:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("reverse is %d",sum);
	return 0;
}
