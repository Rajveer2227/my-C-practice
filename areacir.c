#include<stdio.h>
void main()
{
	float r,area=0;
	const float pi=3.14;
	printf("\nENTER RADIUS:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\nAREA=%.2f",area);
}
