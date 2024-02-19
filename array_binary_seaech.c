#include<stdio.h>
int main()
{
	int arr[10]={22,33,44,55,66,77,88,99,109,119};
	int key=109,beg,mid,last,loc = -1;
	beg = 0; last = (10-1);
	while(beg<=last)
	{
		mid = (beg+last)/2;
		if(arr[mid]==key)
		{
			loc = mid;
			break;
		}
		else if(arr[mid]<=key)
		{
			beg = mid+1;
		}
		else if (arr[mid]>=key)
		{
			last = mid-1;
		}
	}
	if (loc!=-1)
	{
		printf("The key is at the location of %d ",loc+1);
		return 0;
	}
}
