#include<stdio.h>
int main()
{
	int a[100][100],n,m,sum;
	float avg;
	printf("Enter the number of students:");
	scanf("%d",&n);
	printf("Enter the number of courses:");
	scanf("%d",&m);
    for(int i=0;i<n;i++)
	{
	    printf("Enter Student %d details:\n",i+1);
		   for(int j=0;j<m;j++)
		{	printf("course %d :",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
			avg=sum/m;
        }
	printf("Student %d avg marks:%f\n",i+1,avg);
	}
	return 0;
}
