#include<stdio.h>
int main(){
	int i,f=1;
	printf("Enter the number:");
	scanf("%d",&i);
	while(i>0)
	{
		f=f*i;
		i--;
	}
	printf("factorial :%d",f);
	return 0;
}
