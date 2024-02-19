#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],result[30][30],i,j,k,r1,r2,c1,c2;
	printf("enter the size of 1st row:");
	scanf("%d",&r1);
	
	printf("enetr the size of 1st coloumn:");
	scanf("%d",&c1);
	
	
	for(i=0;i<c1;i++)
	{
	     for(j=0;j<r1;j++)
		 {
		     scanf("%d",&a[i][j]);
	     }
    }
    printf("enter the size of 2nd row:");
	scanf("%d",&r2);
	
	printf("enetr the size of2nd  coloumn:");
	scanf("%d",&c2);
	

	for(i=0;i<c2;i++)
	{
	     for(j=0;j<c2;j++)
		 {
		     scanf("%d",&b[i][j]);
	     }
	 }
	 while(c1!=r2)
	 {
	 	printf("Error!...Please enter the no:of rows and columns are equall:\n");
	 	printf("enter the size of  1st matrix row:");
	scanf("%d",&r1);
	
	printf("enetr the size of 1st matrix coloumn:");
	scanf("%d",&c1);
	
	printf("enter the size of 2nd matrix  row:");
	scanf("%d",&r2);
	
	printf("enetr the size of 2nd matrix coloumn:");
	scanf("%d",&c2);
	 }
	 printf("Multipication of a  and b matrices:\n");
	 for(i=0;i<c1;i++)
	 {
	 	for(j=0;j<r2;j++)
	 	{
	 		result[i][j]=0;
	 		for(k=0;k<c1;k++)
	 		{
	 			result[i][j]+=a[i][k]*b[k][j];
			 }
			 printf("%d\t",result[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}
