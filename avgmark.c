#include<stdio.h>
void main()
{
	char nm[10];
	int rno,m1,m2,m3,tot,avg;
	printf("\nEnter Name");
	scanf("%s",&nm);
	printf("\nEnter Rollno");
	scanf("%d",&rno);
	printf("\nEnter Marks For Three Subs");
	scanf("%d%d%d",&m1,&m2,&m3);
	tot=m1+m2+m3;
	avg=tot/3;
	printf("\ntotal=%d\tavg=%d",tot,avg);
	if(avg<50)
	{
		printf("\nremark=fail");
	}
	else if(avg>=50 && avg<60)
	{
		printf("\nremark=pass");
	}
	else if(avg>=60 && avg<70)
	{
		printf("\nremark=first class");
	}
	else
	{
		printf("\nremark=distinction");
	}
}

