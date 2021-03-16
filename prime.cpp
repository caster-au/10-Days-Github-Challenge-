//prime number through recursion
#include<stdio.h>
int prime(int,int);
int main()
{
	int n,i=2,p;
	printf("enter a number:");
	scanf("%d",&n);
	p=prime(n,n/2);
	if(p==1)
	{
		printf("prime\n");
	}
	else
	{
		printf(" not prime\n");
	}
	return 0;
}
int prime(int n,int i)
{
	if (i==1)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
			prime(n,i-1);
		}
	}
}

