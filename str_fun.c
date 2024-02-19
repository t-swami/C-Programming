#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isStrongPassword(char *password){
	int len = strlen(password);
	int hasUpperCase = 0;
	int hasLowerCase = 0;
	int hasSpecialChar = 0;
	if(len<8)
	{
		
	}
}
int main()
{
	char password[30];
	printf("Enter the password:");
	gets(password);
	if(isStrongpassword(password))
	{
		printf("Strong password and valid one");
	}
	else
	{
		printf("Not a Strong Password,Give a strong password.")
	}
	
	return 0;
}
