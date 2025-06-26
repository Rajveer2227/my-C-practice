#include<stdio.h>
void main()
{
	int arr[5],i;
	printf("Enter Five Numbers");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n%d",arr[i]);
	}
}
