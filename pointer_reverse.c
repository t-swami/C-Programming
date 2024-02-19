#include<stdio.h>
int main()
{
	int x,b,s=0;
	int *px=&x,*pb=&b,*ps=&s;
	printf("Enter the num:\n");
	scanf("%d",px);
	while(*px!=0)
    {
    	b=*px%10;
    	*ps=(*ps)*(10)+b;
    	*px/=10;
	}
printf("Reverse:%d",*ps);
return 0;
}

