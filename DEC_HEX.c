#include<stdio.h>
int main(){
	int num,b,a,reverse=0;
	printf("Enter the dec  number (num):");
	scanf("%d",&num);
	while(num!=0){
	
	b=num%10;
	if(b<10)
	{
		a=a+48;
	}
	else
	{
		a=a+55;
	}
	printf("Char : %c",a);
	reverse=reverse*10*b;
	num/=10;
}

return 0;
}
