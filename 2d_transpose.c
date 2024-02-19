#include<stdio.h>
int main ()
{
	int a[30][30],i,j,x,y;
	printf("enter the size of row:");
	scanf("%d",&x);
	
	printf("enetr the size of coloumn:");
	scanf("%d",&y);
	printf("enetr the %d elements:\n",x*y);
	for(i=0;i<x;i++)
	{
	for(j=0;j<y;j++){
		scanf("%d",&a[i][j]);
	}
}
printf("Matrix is:\n");
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("%d\t",a[i][j]);
	}
printf("\n");
	}
	printf("Transpose of matrix is:\n");
for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		printf("%d\t",a[j][i]);
	}
	printf("\n");
}
return 0;
}
