#include<stdio.h>
int main()
{
	int a[10];
	int i,n,sum=0;
	printf("enter number of element to enter:");
	scanf("%d",&n);
	printf("enter element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d ",sum);
	return 0;
}
