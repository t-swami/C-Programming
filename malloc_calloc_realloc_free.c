#include<stdio.h>
#include<stdio.h>
int main()
{
	int *m,*c,n,k;
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
			scanf("%d",(m+i));
		}
			printf("This is calloc:\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",(c+i));
		}	
			printf("This is malloc:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\n",*(m+i));
		}
			printf("This is calloc:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\n",*(c+i));
		}	
	k=n;
	printf("Enter the extended memory size:");
	scanf("%d",&n);
void *realloc(ptr,n);
	
	if(m==NULL || c==NULL)
	{
		printf("\nmemory not available");
		exit(2);
	}
	else
	{	printf("This is malloc:\n");
		for(int i=k;i<n;i++)
		{
			scanf("%d",(m+i));
		}
			printf("This is calloc:\n");
		for(int i=k;i<n;i++)
		{
			scanf("%d",(c+i));
		}	
			printf("This is malloc:\n");
		for(int i=k;i<n;i++)
		{
			printf("%d\n",*(m+i));
		}
			printf("This is calloc:\n");
		for(int i=k;i<n;i++)
		{
			printf("%d\n",*(c+i));
		}
	}}
//	free(ptr);
		return 0;
	}
