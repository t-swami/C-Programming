#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num1, *num2;

    // Allocate memory
    num1 = (int*) malloc(sizeof(int));
    num2 = (int*) malloc(sizeof(int));

    if(num1 == NULL || num2 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Enter two numbers: ");
    scanf("%d %d", num1, num2);

    if(*num1 > *num2)
        printf("The greatest number is: %d\n", *num1);
    else
        printf("The greatest number is: %d\n", *num2);

    // Deallocate memory
    free(num1);
    free(num2);

    return 0;
}

