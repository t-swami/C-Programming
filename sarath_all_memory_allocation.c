#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int n,m, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
a= (int*)calloc(n,sizeof(int));
    if (a == NULL) {
        printf("Memory not available\n");
        return 1;
    } else {
        printf("Memory available\n");
    printf(" enter the values:\n");
    for( i = 0;i<n;i++){
    	scanf("%d",a+i);
	}
    
    printf("The elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", *(a + i));
    } 
	m=n;
	printf("enter new val of n:");
	scanf("%d",&n);
	a=(int*)realloc(a,n*sizeof(int));
	if (a == NULL) {
        printf("Memory not available\n");
        return 1;
    } else {
        printf("Memory available\n");
    printf(" enter the  new values:\n");
    for( i =m;i<n;i++){
    	scanf("%d",a+i);
	}
    printf("The elements are:\n");
     for (i = 0; i < n; i++) {
        printf("%d\n", *(a + i));
    } 
}
free(a);
printf(" memory deaalocated");
}
	return 0;
}
