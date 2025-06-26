#include<stdio.h>
void main()
{
	int no,rem=0,res=0;
	printf("\nEnter no");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		res=res*10+rem;
		no=no/10;
	}
	printf("\nreverse no=%d",res);
}
