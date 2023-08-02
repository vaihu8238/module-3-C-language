#include<stdio.h>
int main()
{
	int  n , r=0 ;
	
	
	printf(" give a number : ");
	scanf("%d",&n);
	
	while( n != 0)
	
	{
		r = r * 10;
		
		r = r + n%10;
		
		n = n/10;
	}
	printf("reverse num is := %d \n",r);
}