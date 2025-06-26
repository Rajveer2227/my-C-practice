#include<stdio.h>
void calsum(int,int);
void main()
{
	int a,b;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	calsum(a,b);
}
void calsum(int x,int y)
{
	int res;
	res=x+y;
	printf("\nsum=%d",res);
}
