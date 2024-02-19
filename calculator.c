#include<stdio.h>
int main(){
	char x;
	int a,b;
	printf("***** calculator *****\n");
	printf("Operations allowed are +,-,/,*,%\n");
	printf("enter the symbol:");
	scanf("%c",&x);
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2st number:");
	scanf("%d",&b);
	if(x=='+')
	{
		printf("sum is %d",a+b);
		}
	else if(x=='-')
	{
		printf("sub is %d",a-b);
	}
	else if(x=='/')
	{
		printf("div is %d",a/b);
	}
	else if(x=='*')
	{
		printf("mul is %d",a*b);
	}
	else if(x=='%'){
		printf(" mod is %d",a%b);
	}
	else {
		printf("enter the valid symbol");
	}
	return 0;
}
