#include<stdio.h>
int main()
{
	int a[100],n,sum=0,*ptr1,*s,*num;
	float mean,*pmean;
	pmean=&mean;
	ptr1=a;s=&sum,num=&n;
	printf("Enter the size of the array:");
	scanf("%d",num);
	printf("Enter the array Elements:\n");
	for (int i = 0;i<*num;i++)
	{
		scanf("%d",ptr1+i);
	}
	
	printf("Addition of array Elements:\n");

	for(int i=0;i<*num;i++)
	{
	*s= *s+*(ptr1+i);
	}
	*pmean = *s/(*num);
	
	printf("Sum = %d\n Mean = %f",*s,*pmean);
	
	return 0;
	
}
