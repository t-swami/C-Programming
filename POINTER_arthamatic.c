#include<stdio.h>
int main()
{
	int x,y,add,sub,mul,div,mod;
	int *padd=&add,*psub=&sub,*pmul=&mul,*pdiv=&div,*pmod=&mod,*pnum1=&x,*pnum2=&y;
	printf("Enter the numbers:\n");
	scanf("%d",pnum1);
	scanf("%d",pnum2);
	*padd = (*pnum1) + (*pnum2);
	*psub = (*pnum1) - (*pnum2);
	*pmul = (*pnum1) * (*pnum2);
	*pdiv = (*pnum1) / (*pnum2);
	*pmod = (*pnum1) % (*pnum2);
	printf("\nAdd:%d",*padd);
	printf("\nSubt:%d",*psub);
	printf("\nMul:%d",*pmul);
	printf("\nDiv:%d",*pdiv);
	printf("\nModules:%d",*pmod);
	return 0;
}
