#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long binaryval, hexadecimalval = 0, i = 1, remainder;

    printf("Input Binary Number (8 digits) : ");
    scanf("%lld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Binary number is %lld\n", binaryval);
    printf("Hexadecimal is %lX", hexadecimalval);
    return 0;
}
