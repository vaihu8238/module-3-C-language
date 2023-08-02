#include<stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR : \n");
	scanf("%d",&year);
	
	if(year%100 == 0 && year%400 == 0 && year%4 == 0)
	{
		printf("THIS IS LEEP YEAR");
	}
	
	else
	{
		printf("THIS IS NOT LEEP YEAR");
	}
}