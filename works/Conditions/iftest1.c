#include<stdio.h>
void main()
 {
 int number1, number2;
 printf("Dear user, please, enter the first number: ");
 scanf("%d",&number1);
 printf("Dear user, please, enter the second number: ");
 scanf("%d",&number2);
 if (number1 > number2)
  printf("The first number %d is > than the second %d number\n",number1,number2);
 printf("This text appeared\n");
 if (number2 > number1)
  {
  printf("The second number %d is bigger than the first %d\n",number2,number1);
  printf("This text will appear anyways\n");
  }
} 
