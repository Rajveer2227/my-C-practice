#include<stdio.h>
void main()
{
	int a;
	printf("\nEnter Number");
	scanf("%d",&a);
	if(a>0)//&& Logical and
	{
		printf("\npositive number",a);
		
	}
	
	else if (a<0)
	{
	printf("\nnegative number",a);	
	}
	else
	{
		printf("\nzero",a);
	}
}
