#include<stdio.h>
int main()
{
	int x[5],max,min;
	printf("Enter the numbers:\n");
		for(int i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}// {20,34,231,42,9}
	max = x[0];
	for(int i=1;i<5;i++)
	{
	 if(max<x[i])
	    {
	    	min=x[i];
		}	
	}
		min = x[0];
	for(int i=1;i<5;i++)
	{
	 if(min>x[i])
	    {
	    	min=x[i];
		}
	}
	printf("-----------------\n");
	printf("%d\n%d",max,min);

	return 0;
}
