#include<stdio.h>
int main()
{
	int a[100],n;
	int *pa=a,*pn=&n;
	printf("Enter the size:");
	scanf("%d",pn);
    printf("Enter the Elements:\n");
    for(int i=0;i<*pn;i++)
{
	scanf("%d",pa+i);
}

printf("\nArray elements are:");
    for(int i=0;i<*pn;i++)
{
	printf("%d",*(pa+i);
}    

return 0;
}
