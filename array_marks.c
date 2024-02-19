#include<stdio.h>
int main(){
	int marks[3],sum=0;
	float average;
	
	for(int i=0;i<3;i++)
	{
		printf("Enter the student %d marks:",i+1);
		scanf("%d",&marks[i]);
	}for(int i=0;i<3;i++)
	{
		sum = sum + marks[i];
	}
	printf("Total marks = %d\n",sum);
	average = sum/3;
	printf("Average marks = %f",average);
	return 0;
}
