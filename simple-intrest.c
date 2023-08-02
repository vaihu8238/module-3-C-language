#include<stdio.h>
int main()
{
	float P , R , T , si ;
	
	printf("enter P (amount) : ");
	scanf("%f", &P);
	
	printf("enter T (time) :  ");
	scanf("%f", &T);
	
	printf("enter R (rate) : ");
	scanf("%f", &R);
	
	si = (P * T * R) / 100;
	
	printf("simple interest = %f",si);
	
	
}