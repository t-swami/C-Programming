#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int length = 0;
	printf("Enter the string:");
	gets(str);
	for(int i=0;str[i]!=0;i++)
	{
		length++;
	}
	printf("Length of the string:%d",length);
	return 0;
}
