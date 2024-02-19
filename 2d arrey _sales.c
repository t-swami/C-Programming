#include<stdio.h>
int main()
{
	int a[100][100],n,m,b;
	printf("Enter the number of students:");
	scanf("%d",&n);
	printf("Enter the number of subjects:");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		printf("Enter Student %d details:\n",i+1);
		for(int j=0;j<m;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		
		b=a[0][0];
		for(int j=0;j<m;j++)
		{
			if(a[0][0]<b)
			{
				b=a[i][j];
			}
		}
		printf("Minimum marks scored by student %d is %d:",i+1,b);
	}
	return 0;
	
}
