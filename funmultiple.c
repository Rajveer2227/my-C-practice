#include<stdio.h>
void calsum(int,int);
void calsub(int,int);
void main()
{
	int a,b;
	printf("\nEnter two nos");
	scanf("%d%d",&a,&b);
	calsum(a,b);
	calsub(a,b);
	}
	void calsum(int x,int y)
	{
		int res;
		res=x+y;
		printf("\nsum=%d",res);
	}
	
		void calsub(int x,int y)
	{
		int res;
		res=x-y;
		printf("\nsub=%d",res);

	}
