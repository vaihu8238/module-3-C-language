#include<stdio.h>
int main()
{
	int i , j , n , space , value;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
//	for(i=1 ; i<=n ; i++)
//	{
//		for(j=1 ; j<=i ; j++)
//		{
//			if(j % 2 == 1)
//			{
//				printf("1");
//			}
//			else
//			{
//				printf("0");
//			}
//		}
//		printf("\n");
//	}


	
	value =1;
	
	for(i=1 ; i<=n ; i++)
	{
	
		for(j=1;j<=i;j++)
		{
			for(j=1; j<=i; ++j)
			{
				printf(" ");
				printf("%d",value);
				++value;
			}
			
		}
		printf("\n");
	}
		
}