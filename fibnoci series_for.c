#include<stdio.h>
int main(){
	int a=0,b=1,num,c;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("%d\t%d\t",a,b);
	for(int i=3;i<=num;i++)
	{
		c=a+b;
		printf("%d\t",c);
	    a=b;b=c	;
	}
	return 0;
}
