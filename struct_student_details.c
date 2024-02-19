
#include<stdio.h>
struct student{
	char *name;
	int reg_no;
	int m1,m2,m3;
}; 
void details(struct student *s1);
int main()
{
struct student s;
details(&s);

	printf("Name = %s\nReg_no = %d\nMarks1 = %d\nMarks2 = %d\nMarks3 = %d",&s.name,s.reg_no,s.m1,s.m2,s.m3);
	return 0;
}
void details(struct student *s1)
{
	printf("Enter the name of s :");
	scanf("%s",&s1->name);
	printf("Enter the Reg_no of s :");
	scanf("%d",&s1->reg_no);
	printf("Enter the  marks1 of s:");
	scanf("%d",&s1->m1);
	printf("Enter the  marks2 of s:");
	scanf("%d",&s1->m2);
	printf("Enter the  marks3 of s:");
	scanf("%d",&s1->m3);
	
}
