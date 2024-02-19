#include<stdio.h>
int main()
{
	int arr[100],n,key,loc=-1;    //n=Size
	printf("Enter the size of the array:");
	scanf("%d",&n);
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[1-2];
		printf("%d",arr[i]);
	}

	printf("Enter the key to search:");
	scanf("%d",&key);
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
