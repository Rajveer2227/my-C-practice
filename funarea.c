#include<stdio.h>
void calarea(float);
void main()
{
	float r;
	printf("\nEnter radius:");
	scanf("%f",&r);
	calarea(r);
}
void calarea(float x)
{
	float area=0.0;
	const float pi=3.14;
	area=x*x*pi;
	printf("\nArea of circle=%f",area);
}
