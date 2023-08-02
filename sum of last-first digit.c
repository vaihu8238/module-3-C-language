#include<stdio.h>
int main()
{
	int num , t , ld , fd , sum ;
	
	printf("enter the number : ");
	scanf("%d",&num);
	
	t = num ;
	
	ld = num %10 ;
	
	while(num > 10)
	{
		num = num/10 ;
	}
	fd = num;
	
	sum = fd + ld ;
	
	printf("sum of first or last digit  = %d",sum,t);
}