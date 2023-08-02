#include<stdio.h>
int main()
{
	int x=10 , y=5 ;
//	printf("enter two numbers : \n");
//	scanf("%d %d",&x,&y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf("AFTER SWAPPING : x = %d, y = %d",x,y);
	
}