#include<stdio.h>
int main(){
	int num;
	printf("Enter the number;");
	scanf("%d",&num);
	for (int i=num;i>0;i--)
	{
	    for (int j=i;j>0;j--)
	    {
	    printf("*\t");	
		}
		printf("\n");
}
return 0;
}
