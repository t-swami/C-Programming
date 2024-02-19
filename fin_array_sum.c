#include<stdio.h>
void sum(int [],int n);
void avg(n);
	int s=0;
int main(){
	int arr[100],n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	sum(arr,n);
	avg(n);
	return 0;
}
void sum(int a[],int x){

	for(int i=0;i<x;i++)
	{
		s+=a[i];
	}
	printf(" sum is : %d",s);
}
void avg(int f){
	printf("\n%d is the avg of array",s/f);
}
