#include<stdio.h>
int main()
{
	int a[1000],i,n,min,max ;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	printf("enter elemnt :\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1 ; i<n ; i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("minimum number : %d \n",min);
	printf("maximum number :%d \n",max);
}