#include<stdio.h>
int main()
{
	int max,i,n,m=0;
	int a[50];
	printf("enter n number :");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>m){
			m=a[i];
		}
	}
	printf("the largest number is %d",m);
	return 0;
}
