
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int *ptr=0;
	printf("%u",ptr);
	printf("%d",*ptr);
	// wild pointer:
	int *x;
	printf("%u",x);
	printf("%d",*x);
	
	
	



	return 0;
}
