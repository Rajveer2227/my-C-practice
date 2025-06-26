//accept the no and check it is even or odd
#include<stdio.h>
void main()
{
	int num;
	printf("\nEnter Number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\nGiven no %d is even",num);
	
	}
	else
	{
	printf("\nGiven no %d is odd",num);	
	}
}
