#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\nMax number=%d",a);
	}
	else
	{
		printf("\nMax number=%d",b);	
	}
}
