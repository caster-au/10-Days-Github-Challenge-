#include<stdio.h>
int main()
{
	int unit;
	int bill_amt;
	printf("enter electricity unit:");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill_amt=unit*3;
	}
	else
	{
		bill_amt=unit*5;
	}
	printf("bill amount is %d",bill_amt);
	return 0;
}
