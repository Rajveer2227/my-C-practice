#include<stdio.h>
void main()
{
	
	int a[5],i,tot=0;
	printf("\nEnter five nos");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		tot=tot+a[i];
			}
			printf("\nTotal=%d",tot);
	}
