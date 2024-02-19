#include<stdio.h>
int main()
{
	int x,temp=1;
	int *px=&x,*ptemp=&temp;
	printf("Enter the num:\n");
	scanf("%d",px);
	for(int i=*px;i>0;i--)
	{
		*ptemp*=(i);
	}
	printf("\nFact:%d",*ptemp);
	return 0;
	
}
