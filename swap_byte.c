#include <stdio.h>

int main(){
    unsigned int number = 10;
    unsigned char *h;
    h = (unsigned char*)&number;
    printf("Your start number: %u \n", number);
    h+=2;
    printf("Your start 3rd byte: %d \n", *h);
    printf("input your new 3rd byte: ");
    scanf("%hhd", h);
    printf("Your correct 3rd byte: %d \n", *h);
    printf("Your correct number: %u \n", number);
    return 0;
}
