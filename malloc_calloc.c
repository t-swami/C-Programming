#include<stdio.h>
#include<stdio.h>
int main()
{
	int *m,*c,ndcz;
	printf("Enter the value of the n:");
	scanf("%d",&n);
	m=(int*)malloc(n*sizeof(int));
	c=(int*)calloc(n,sizeof(int));
	if(m==NULL || c==NULL)
	{
		printf("\nmemory not available");
		exit(1);
	}
	else
	{	printf("This is malloc:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\n",*(m+i));
		}
			printf("This is calloc:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\n",*(c+i));
		}	
	}
	
		return 0;
	}
