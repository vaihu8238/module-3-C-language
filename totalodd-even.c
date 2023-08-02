#include<stdio.h>
int main()
{
	int array[10] , evencount=0 , oddcount=0 , i ;
	printf("ENTER YOUR CHOICE : \n");


     for(i=0;i<10;i++)
	scanf("%d", &array[i]);
	 for(i=0;i<10;i++)
	 
	{
		if(array[i]%2==0)
		  evencount++;
		else
		  oddcount++;
	}
	printf("\n TOTAL EVEN NUMBER : = %d",evencount);
	printf("\n TOTAL ODD NUMBER : = %d",oddcount);
	getch();
}