#include<stdio.h>
void pass(int);
int main(){
	int a[100],n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("-----------\n");
	for(int i=0;i<n;i++)
    {
    pass(a[i]);
	}
	return 0;
}
void pass(int x)
{
	printf("%d\n",x);
}
