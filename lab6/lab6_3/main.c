#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char num1,num2,num3,num4,num5,num6,num7,num8;
    int b0 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,b5 = 0,b6 = 0,b7 = 0;
    int ch;


    printf("1. Convert  Binary  to Decimal\n");
    printf("2. Convert Binary to Octal\n");
    printf("3. Convert Binary to Hexadecimal\n");
    printf("4. Exit\n");
    printf("Choose a choice: ");
    scanf("%d",&ch);

     if(ch==4)
        {
        printf("Exit completed..\n\n");
        exit(EXIT_SUCCESS);
        }
     else if (ch > 4)
        {
        printf("not valid option!\n\n");
        exit(EXIT_SUCCESS);
        }

        printf("Input Binary number (8 digits) : ");
        scanf(" %c%c%c%c%c%c%c%c",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8);
        b0 = num1-48;
        b1 = num2-48;
        b2 = num3-48;
        b3 = num4-48;
        b4 = num5-48;
        b5 = num6-48;
        b6 = num7-48;
        b7 = num8-48;


    if(ch==1)
    {

    if ( num8=='1' || num8=='0')
    {
        if ( num7=='1' || num7=='0')
        {
            if ( num6=='1' || num6=='0')
            {
                 if ( num5=='1' || num5=='0')
                 {
                      if ( num4=='1' || num4=='0')
                      {
                           if ( num3=='1' || num3=='0')
                           {
                                if ( num2=='1' || num2=='0')
                                {
                                     if ( num1=='1' || num1=='0')
        {
        printf("Binary Number is %c%c%c%c%c%c%c%c\n",num1,num2,num3,num4,num5,num6,num7,num8);
        convert_decimal(b0,b1,b2,b3,b4,b5,b6,b7);
         }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }

    }
    else if(ch==2)
    {
           if ( num8=='1' || num8=='0')
    {
        if ( num7=='1' || num7=='0')
        {
            if ( num6=='1' || num6=='0')
            {
                 if ( num5=='1' || num5=='0')
                 {
                      if ( num4=='1' || num4=='0')
                      {
                           if ( num3=='1' || num3=='0')
                           {
                                if ( num2=='1' || num2=='0')
                                {
                                     if ( num1=='1' || num1=='0')
        {
        printf("Binary Number is %c%c%c%c%c%c%c%c\n",num1,num2,num3,num4,num5,num6,num7,num8);
        convert_octal(b0,b1,b2,b3,b4,b5,b6,b7);
         }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
    }
    else if(ch==3)
    {
            if ( num8=='1' || num8=='0')
    {
        if ( num7=='1' || num7=='0')
        {
            if ( num6=='1' || num6=='0')
            {
                 if ( num5=='1' || num5=='0')
                 {
                      if ( num4=='1' || num4=='0')
                      {
                           if ( num3=='1' || num3=='0')
                           {
                                if ( num2=='1' || num2=='0')
                                {
                                     if ( num1=='1' || num1=='0')
        {
        printf("Binary Number is %c%c%c%c%c%c%c%c\n",num1,num2,num3,num4,num5,num6,num7,num8);
        convert_Hexadecimal(b0,b1,b2,b3,b4,b5,b6,b7);
         }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0\n");
            }
    }

 return 0;
}


void convert_decimal(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7)
{
    int Decimal;
    Decimal = b0*128 + b1*64 + b2*32 + b3*16 + b4*8 + b5*4 + b6*2 + b7*1;
    printf("Decimal is %d\n", Decimal);
}

void convert_octal(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7)
{
    int Octal,Octal2,Octal3;
    Octal  = b0*2 + b1*1;
    Octal2 = b2*4 + b3*2 + b4*1;
    Octal3 = b5*4 + b6*2 + b7*1;
    printf("Octal is %d%d%d\n", Octal,Octal2,Octal3);
}

void convert_Hexadecimal(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7)
{
    int hex1,hex2;
    char hex11,hex12;
    if(b0<=1 && b1<=1 && b2<=1 && b3<=1 && b4<=1 && b5<=1 && b6<=1 && b7<=1)
    {
            hex1 = (b0*8)+(b1*4)+(b2*2)+(b3*1);
            hex2 = (b4*8)+(b5*4)+(b6*2)+(b7*1);
       if(hex1<=9)
            hex11 = hex1+48;
       if(hex2<=9)
            hex12 = hex2+48;
       if(hex1>9)
            hex11 = hex1+55;
       if(hex2>9)
            hex12 = hex2+55;
    }
    printf("Hexadecimal is %c%c\n",hex11,hex12);
}
