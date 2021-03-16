//palindrom number through recursion
#include<stdio.h>
int pali(int);
int main()
{
	int n,p;
	printf("enter a number:");
	scanf("%d",&n);
	p=pali(n);
	if(p==n)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	return 0;
}
int pali( int n)
{
	int r;
	static int sum=0;
	if (n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		pali(n/10);
	}
	return sum;
}
