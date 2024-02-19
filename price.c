#include<stdio.h>
int main(){
	int year,x;
	printf("Enter the year = ");
	scanf("%d",&year);
(year%100!=0 && year%400==0 || year%4==0)?printf("leap year"):printf("not a leap year");
	return 0;

	

	
}
