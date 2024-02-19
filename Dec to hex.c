#include <stdio.h>
int main() {
    int dec_num,r,index;//r=remainder
    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);
    char hex_dec[100],hex_num;
    index = 0;// used to store the each character.
    while (dec_num > 0) {
        r = dec_num % 16;
        hex_num;
        if (r < 10) {
            hex_num = r + '0';
        } else {
            hex_num = r - 10 + 'A';
        }
        hex_dec[index++] = hex_num;
        dec_num /= 16;
    }// used to print reverse order of the number.
    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex_dec[i]);
    }
    printf("\n");
    return 0;
}
    
