#include<stdio.h>
int main(){
	int num,fact=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("Factorial of the given number is:%d",fact);
	return 0;
}
