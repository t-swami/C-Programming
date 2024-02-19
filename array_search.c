#include<stdio.h>
int main()
{
	int arr[100],size,loc=-1,key;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the array elements:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\nEnter the key to search:");
	scanf("%d",&key);
	for(int i=0;i<size;i++)
	{
		if(key==arr[i])
		{
			loc=i;
			break;
		}
		
	}
	if(loc!=-1)
	{
		printf("Element is found at location of %d",loc+1);
		
	}
	else
	{
		printf("Element is not found");
	}
	return 0;
	}
