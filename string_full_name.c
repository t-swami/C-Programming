#include<stdio.h>
#include<conio.h>
int main()
{
	char name[100];
	printf("Enter your name:\n");
	gets(name);
	printf("Your Name is:");
	puts(name);
	
	char *s = name;       /* By using pointers:*/
	printf("Your name is:%s",s);
	return 0;
}
