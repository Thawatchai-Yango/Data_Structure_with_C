#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if( num1 < num2)
    {
        if(num1 <num3)
            if(num2 < num3)
                printf("Sorted output: %d %d %d", num1,num2,num3);
            else
                printf("Sorted output: %d %d %d", num1,num3,num2);
    }

    else if( num2 < num3)
    {
        if(num1 < num3)
                printf("Sorted output: %d %d %d", num2,num1,num3);
            else
                printf("Sorted output: %d %d %d", num2,num3,num1);
    }

    else
    {
        printf("Sorted output: %d %d %d", num3,num2,num1);
    }

    return 0;

}
