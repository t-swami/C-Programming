#include<stdio.h>
int main(){
	int a=0,b=1,c,i=3,n=10;
	printf("%d\t%d\t",a,b);

	while(i<=10)
	{
		c=a+b;
		printf("%d\t",c);
		a=b,b=c;
		i++;	
	}
	return 0;
	}
	
