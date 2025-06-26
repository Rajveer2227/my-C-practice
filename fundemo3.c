#include<stdio.h>
int calsum(int,int);
void main()
{
	int a,b,c;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	c=calsum(a,b);
	printf("\nsum=%d",c)
}
int calsum(int x,int y)
{
	int res;
	res=x+y;
	return(res);
}
