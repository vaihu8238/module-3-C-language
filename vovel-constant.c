#include<stdio.h>
int main()
{
	char alpha;
	printf ("ENTER THE LATTER :");
	scanf(" %c",&alpha);
	
	switch(alpha)
	{
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
			printf("THIS IS VOWEL");
			break;
			
		default:
			printf("THIS IS NOT VOWEL");
	}
}