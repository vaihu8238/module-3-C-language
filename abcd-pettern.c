#include<stdio.h>

int main()
{
	int i , j , n ;
	
	printf("ENETER THE NUMBER :");
	scanf("%d",&n);
//	
//	for(i=1 ; i<=n ; i++)
//	{
//		for(j=1 ; j<=i ; j++)
//		{
//			printf("%c",'A' + j-1 );
//		}
//		printf("\n");
//	}
	
	
	char ch='A';
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
	
}