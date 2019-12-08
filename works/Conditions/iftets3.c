#include<stdio.h>
void main()
 {
 int number1, number2;
 printf("Please, enter 1. number: ");
 scanf("%d",&number1);
 printf("Please, enter 2. number: ");
 scanf("%d",&number2);
 if (number1 > number2)
  printf("Your 1. number %d is > than 2. number %d\n",number1,number2);
 else {
  if (number1 < number2)
   printf("Your 1. number %d is < than 2.  %d\n",number1,number2);
  else
   printf("Your 1. number %d is == to 2.  %d\n",number1,number2);
  }
}
