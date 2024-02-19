#include<stdio.h>
int main ()
{
	int a[30][30],i,j,x,y,b[30][30];
	printf("enter the size of row");
	scanf("%d",&x);
	printf("enetr the size pf coloumn");
	scanf("%d",&y);
	printf("enetr the elements\n");
	for(i=0;i<x;i++)
	{
			printf("\n");
	for(j=0;j<y;j++){
		scanf("%d",&a[i][j]);
	}
}
    printf("enter the second matrix\n");
	for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		scanf("%d",&b[i][j]);
	}
	printf("\n");
}
    printf("sum of two matrix\n");
	for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		printf("%d\t",a[i][j]+b[i][j]);
	}
	printf("\n");
}
}
