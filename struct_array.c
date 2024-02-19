#include<stdio.h>
struct student {
	char *name;
	int reg_no;
	int roll_no;
};
void main()
{int n;
printf("Enter the size:");
scanf("%d",&n);
	struct student s[100];
	for(int i=0;i<n;i++)
	{
		printf("Enter the student %d details:\n",i+1);
		scanf("%s%d%d",&s[i].name,&s[i].reg_no,&s[i].roll_no);
	}
	for(int i=0;i<n;i++)
	{
		printf("the student %d details:\n",i+1);
		printf("name : %s\nReg_no : %d\n roll_no: %d\n",&s[i].name,s[i].reg_no,s[i].roll_no);
	}
}
