#include <stdio.h>
#include <stdlib.h>

int main()
{
    float DN1,DN2 ;
    char OP,Result ;

    printf("Input Decimal Number1: ");
    scanf("%f", &DN1);
    printf("Input Decimal Number2: ");
    scanf("%f", &DN2);
    printf("Press Operator do you want to Process (+,-,*, /,^ ): ");
    scanf("%*c%c", &OP);
    if (OP == '+')
    {
        printf("Result %g + %g = %g",DN1,DN2,DN1+DN2);
    }

    return 0;
}
