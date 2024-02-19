#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Sum of n natural numbers:\t");
	while(i<=n)
	{
		sum=sum+i;
		i++;
	
	}
	printf("%d",sum);
	return 0;
}
