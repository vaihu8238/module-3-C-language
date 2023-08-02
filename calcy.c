#include<stdio.h>
int main()
{
	int a , b ;
	printf(" enter the two numbers :\n");
	scanf("%d %d",&a,&b);
	
	char operator;
	printf("enter your choice operator :");
	scanf(" %c",&operator);
	
	if(operator=='+')
	{
		printf("%d",a+b);
	}
	else if(operator=='-')
	{
		printf("%d",a-b);
	}
	else if(operator=='/')
	{
		printf("%d",a/b);
	}
	else if(operator=='*')
	{
		printf("%d",a*b);
	}
	else if(operator=='%')
	{
		printf("%d",a%b);
	}
	else
	{
		printf("invailid");
	}
}