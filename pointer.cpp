#include<stdio.h>
int main()
{
	int i=265;
	int *p;
	p=&i;
	printf("%d %d\n",i,*p);
	printf("%d\n",p);
	printf("%u %u\n",&i,p);
	printf("%p %p\n",&i,p);
	printf("%u\n",&p);
	*p=20;
	printf("%d %d\n",i,*p);
	return 0;
}
