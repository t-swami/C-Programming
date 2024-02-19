#include<stdio.h>
int main(){
	int n,dec_value=0,a=1,b;  //n=binary,x=dec,a=2^0,b=remender
	printf("Enter the binary  number (n):");
	scanf("%d",&n);
	while(n>0)
	{
	b=n%10;
	dec_value=dec_value+(b*a);
	n=n/10;
	a=a*2;
}
printf("Decimal number of n is : %d",dec_value);
return 0;
}
	
