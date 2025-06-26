#include<stdio.h>
void main()
{
	int a[4],i,sq=0;
	printf("\nEnter Four Numbers");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
		sq=a[i]*a[i];
	}
	printf("\n%d",sq);
}
