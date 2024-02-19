#include<stdio.h>
int main()
{
	int a[100][100],x,y,i,j;
	printf("Enter the row size:");
	scanf("%d",&x);
	printf("Enter the columns size:");
	scanf("%d",&y);
	printf("Enter the elements:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Printing the elements in matrix form:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
