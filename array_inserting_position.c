// inserting the element in a position leads to the deleting of the last elements in the array.
#include<stdio.h>
int main(){
	int a[100],n,p,v,d;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(int x=0;x<n;x++)
	{
		scanf("%d",&a[x]);
	} 
	printf("\nEnter the position to insert:");
	scanf("%d",&p);
	printf("Enter the value to insert:");
	scanf("%d",&v);
	for(int i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
		
	}
	a[p-1]=v;
	printf("Re-array:\n");
	for(int x=0;x<n+1;x++)
	{
		printf("%d\t",a[x]);
	}
	printf("\nEnter the position to delete:");
	scanf("%d",&d);
	for (int i=d-1;i>n-1;i++)     //wrong bcz deleteing irrespective of 1st
	
	{
		a[i]=a[i+1];
	}
	for(int x=0;x<n-1;x++)
	{
		printf("%d\t",a[x]);
	}
	return 0; 
}
