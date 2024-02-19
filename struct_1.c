#include<stdio.h>
struct person{
	char *name;
	int salary;
	char *gender;
	};
int main()
{
	struct person p1;
	printf("Enter the name of p1 :");
	scanf("%s",&p1.name);
	printf("Enter the salary of p1 :");
	scanf("%d",&p1.salary);
	printf("Enter the  gender of p1 :");
	scanf("%s",&p1.gender);
	printf("Name = %s\nSalary = %d\ngender = %s",&p1.name,p1.salary,&p1.gender);
	return 0;
	// char datatype consisting of "&" before accessing it.
	
}
