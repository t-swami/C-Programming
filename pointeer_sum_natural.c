#include<stdio.h>
int main(){
	int a,b,sum=0;
	int *pa=&a,*pb=&b,*psum=&sum;
	printf("Enter the numbers:\n");
	scanf("%d%d",pa,pb);

	for(int i=*pa;i<=*pb;i++)
	{
		*psum+=i;
		
	}
	printf("Sum:%d",*psum);
	return 0;
	
}
