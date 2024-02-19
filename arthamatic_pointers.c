#include<stdio.h>
int func(int *a,int *b,int *s,int *m,int *d,int *mo);

int main()
{
	int num1,num2,sum,mul,div,mod;
	printf("Enter the numbers:\n");
	scanf("%d %d",&num1,&num2);
	func(&num1,&num2,&sum,&mul,&div,&mod);
	printf("sum = %d\nmul = %d\ndiv = %d\nmod = %d",sum,mul,div,mod);
	return 0;
}
int func(int *a,int *b,int *s,int *m,int *d,int *mo)
{
	*s = *a + *b;
	*m = *a * *b;
	*d = *a / *b;
	*mo = *a % *b;
}

