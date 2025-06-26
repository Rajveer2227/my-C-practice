#include<stdio.h>
int main()
{
	int no,rem=0,res=0,a;
	printf("\nEnter no");
	scanf("%d",&no);
	a=no;
	while(no>0)
	{
		rem=no%10;
		res=res*10+rem;
		no=no/10;
	}
	if(res==a)
	{
		printf("\nNo is palindrome number");
	}
	else
	{
			printf("\nNo is not palindrome number");
	}
}
