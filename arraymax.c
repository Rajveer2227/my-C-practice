#include<stdio.h>
void main()
{
	int a[5],i,max=0;
	printf("\nEnter Five Nos");
	for(i=0;i<=4;i++)
	{
		
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nmax no=%d",max);
	}
