#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1, num2, cal;
    char ope;

    printf("Input Decimal Number1: ");
    scanf("%f",&num1);
    printf("Input Decimal Number1");
    scanf("%f", &num2);

    printf("Choose Any Operator: +  | - | / | * \n");
    scanf(" %c", &ope); // getting the operator for operation from user

 // Applying if-else condition to check conditions
 if(ope == '+')
 {
  cal= num1+num2;
  printf("Addition of two numbers is: %.0f",cal);
 }

 else if(ope == '-')
 {
  cal= num1-num2;
  printf("Subtraction of two numbers is: %.0f",cal);
 }

 else if(ope == '/')
 {
  cal= num1 / num2;
  printf("Division of two numbers is: %.0f",cal);
 }

 else if(ope == '*')
 {
  cal= num1*num2;
  printf("Multiplication of two numbers is: %.0f",cal);
 }

 else
 {
 printf("Invalid Input");
 }

}
