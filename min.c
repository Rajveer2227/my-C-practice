#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("\nMin number=%d",a);
	}
	else
	{
		printf("\nMin number=%d",b);	
	}
}
