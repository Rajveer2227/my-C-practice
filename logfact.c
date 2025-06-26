#include<stdio.h>
void main()
{
	int i,no,res=1;
	printf("\nEnter Number");
	scanf("%d",&no);
	for(i=no;i>=1;i--)
	{
		res=res*i;
	}
	printf("\nfactorial=%d",res);
}
