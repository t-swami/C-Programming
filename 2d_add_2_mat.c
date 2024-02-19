#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],x,y,i,j;
	printf("Enter the row sizes of a and b:");
	scanf("%d",&x);
	printf("Enter the columns sizes of a  and b:");
	scanf("%d",&y);
	printf("Enter the elements:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd matrix elements:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Printing the elements in matrix a :\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Printing the elements in matrix b:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of 2 matrices:\n");
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	
