#include<stdio.h>
int main()
{
    int a[30][30],i,j,x,y,sum =0;
	printf("enter the size of row:");
	scanf("%d",&x);
	
	printf("enetr the size of coloumn:");
	scanf("%d",&y);
	
	printf("enetr the %d elements:\n",x*y);
	for(i=0;i<x;i++)
	{
	     for(j=0;j<y;j++)
		 {
		     scanf("%d",&a[i][j]);
	     }
    }
    for(i=0;i<x;i++)
    {
    	for(j=0;j<y;j++)
    	{
    		if(a[i]==a[j])
    		{
    			sum=sum+a[i][j];
			}
		}
	}
		printf("Sum of diagonal elements:%d",sum);
		return 0;
	}
    
