#include<stdio.h>
int main()
{
	int n1,n2;
	int ch;
	printf("enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("addition: 1\n");
	printf("substraction: 2\n");
	printf("multiplication: 3\n");
	printf("modulo division: 4\n");
	printf("division: 5\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("addition is: %d",n1+n2);
			 break;
		case 2:
			printf("subtraction is: %d",n1-n2);
			 break;
		case 3:
			printf("multiplication is: %d",n1*n2);
			 break;
		case 4:
			printf("modulo division is: %d",n1%n2);
			 break;
		case 5:
			printf("division is: %d",n1/n2);
			 break;
		default:
			printf("invalid choice");
		
	}
	return 0;
}
