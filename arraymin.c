#include<stdio.h>
void main()
{
	int a[5],i,min=0;
	printf("\nEnter Five Nos");
	for(i=0;i<=4;i++)
	{
		
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<=4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nmin no=%d",min);
	}
