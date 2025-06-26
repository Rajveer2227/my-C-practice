#include<stdio.h>
void main()
{
	
	float a[5],tot=0;
	int i;
	printf("\nEnter five nos");
	
	for(i=0;i<=4;i++)
	{
		scanf("%f",&a[i]);
		tot=tot+a[i];
			}
			printf("\nTotal=%f",tot);
	}
