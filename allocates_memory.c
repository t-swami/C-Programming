#include<stdio.h>
int main()
{
	double *p;
	int n;
	printf("Enter the no:of numbers to be entered:");
	scanf("%d",&n);
	p=(double*)malloc(n*sizeof(double));
	printf("Enter numbers:\n");
	for(int i = 0;i<n;i++)
	{
		scanf("%Lf",p+i);
	}
	printf("numbers are:\n");
		for(int i = 0;i<n;i++)
	{
		printf("%Lf\n",*(p+i));
	
	}printf("address are:\n");
	for(int i = 0;i<n;i++)
	{
		printf("%u\n",(p+i));
	}
	return 0;
}
