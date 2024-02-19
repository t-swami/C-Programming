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
		for(int j=i+1;j<n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
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
