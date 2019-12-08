#include<stdio.h>
void main()
 {
 int number1, number2, yes_no;
 for( yes_no=1 ; yes_no ; )
  {
  printf("Please enter 1. number: ");
  scanf("%d",&number1);
  printf("Please enter 2. number: ");
  scanf("%d",&number2);
  if (number1 > number2)
   printf("Your 1. number %d is > than 2. number %d\n",number1,number2);
  //break;
  printf("Do you want to continue?");
  printf(" (Yes - any number except 0)\n");
  scanf("%d",&yes_no);
  }
 printf("This will appear all the time\n");
 }
