#include<stdio.h>
void main()
 {
 int number1, number2;
 printf("Dear user, enter the 1 number: ");
 scanf("%d",&number1);
 printf("Dear user, enter the 2 number: ");
 scanf("%d",&number2);
 if (number1 > number2)
  {
  printf("Your first number %d is > than the second %d\n",number1,number2);
  printf("Ultimately, other cases are either 1. < 2. or equal\n");
  }
 else
  {
  printf("Your first number is smaller than the second\n");
  printf("None of the numbers are equal\n");
  }
 }
