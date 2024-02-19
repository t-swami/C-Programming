#include<stdio.h>
int main()
{
	int a[100],temp,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(int x=0;x<n;x++)
	{
		scanf("%d",&a[x]);
	}
	printf("Array elements are:");
	printf("[");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("]");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting:[");
		for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("]");
	return 0;
	
	
}
