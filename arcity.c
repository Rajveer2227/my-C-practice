#include<stdio.h>
void main()
{
	char city[10];
	int i=0;
	printf("\nEnter City:");
	scanf("%s",city);
	while(city[i] !='\0')
	{
		printf("%c",city[i]);
		i++;
	}
}
