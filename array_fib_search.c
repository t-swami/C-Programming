#include<stdio.h>
int main()
{
	int arr[10]={0,1,1,2,3,5,8,13,21,34,55,89},key,loc=-1;
	printf("Enter the key to search:");
	scanf("%d",&key);
	
	printf("\nSearching operation\n");
	for(int i=0;i<10;i++)
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
	
	
