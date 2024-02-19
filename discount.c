#include<stdio.h>
int main(){
	int price,discount_after,discount_before;
	printf("Enter the price of the product:");
	scanf("%d",&price);
    discount_after = price-10*price/100;
	discount_before = price-5*price/100;
	if(price>20000){
		printf("you got the discount of 10 percent and final price is %d",discount_after);
	}
else {
	printf("you got the discount of 5 percent and final price is %d",discount_before);
}
return 0;			
}
