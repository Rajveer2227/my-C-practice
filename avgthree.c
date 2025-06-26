#include<stdio.h>
void main()
{
	int a,b,c,total;
	float avg;
	printf("\nEnter three nos");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	avg=(float)total/3;//type conversion
	printf("\nTotal=%d\nAverage of three nos is:%f",total,avg);
}
