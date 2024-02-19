#include<stdio.h>
int display(){
	extern int x;

	printf("%d",x);
		x+=20;
		return 0;
}
