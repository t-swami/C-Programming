#include<stdio.h>
int main()
{
	char name[3][50];
	int age[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter student %d name:",i+1);
		scanf("%s",&name[i]);

		printf("Enter student %d age:",i+1);
		scanf("%d",&age[i]);
	}
	printf("----student details----\n");
	for(int i=0;i<3;i++)
	{
		printf("Name : %s\n",name[i]);
		printf("Age : %d\n",age[i]);
		printf("----------------------\n");
	}
	return 0;
	
	}

