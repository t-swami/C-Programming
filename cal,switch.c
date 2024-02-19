#include<stdio.h>
int main(){
	char symbol;
	int a,b;
	printf("Enter the operator:");
	scanf("%c",&symbol);
	printf("Enter the two values of a and b:");
	scanf("%d\t%d",&a,&b);
	switch(symbol){
		case '+':
			printf("sum=%d",a+b);
			break;
		case '-':
			printf("sub=%d",a-b);
			break;
		case '*':
			printf("mul=%d",a*b);
			break;
		case '/':
			printf("div=%d",a/b);
			break;
		case '%':
			printf("mod=%d",a%b);
			break;
		default:
			printf("Enter the valid operator");
		    break;
	}
	return 0;	
}
